Name:           qpid-snmpd
Version:        1.0.0
Release:        9%{?dist}
Summary:        SNMP agent for Apache qpid

License:        ASL 2.0
URL:            http://eallen.fedorapeople.org/
Source0:        http://eallen.fedorapeople.org/%{name}-%{version}.tar.bz2
Group:          System Environment/Daemons
BuildRoot:      %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)

BuildRequires:  net-snmp-devel
BuildRequires:  qpid-qmf-devel
BuildRequires:  pciutils-devel
BuildRequires:  cmake
%if 0%{?rhel} >= 7
BuildRequires:  systemd-units
%endif

Requires:       net-snmp
%if 0%{?rhel} >= 7
Requires(post): systemd-units
Requires(preun): systemd-units
Requires(postun): systemd-units
%endif

%description
qpid-snmpd - SNMP agent for Apache qpid. Provides read-only   
information about qpid brokers, queues, messages, exchanges, etc.

%prep
%setup -q -c %{name}-%{version}

%build
pushd %{name}
%cmake .
make %{?_smp_mflags}
popd

%install
rm -rf %{buildroot}
pushd %{name}
make install DESTDIR=%{buildroot}

# install the config files
mkdir -p %{buildroot}%{_datadir}/snmp/
install -p -m 664 conf/qpid010.conf %{buildroot}%{_datadir}/snmp
install -p -m 664 conf/snmp.conf %{buildroot}%{_datadir}/snmp/qpid_snmp.conf

# install the mib
mkdir -p %{buildroot}%{_datadir}/snmp/mibs/
install -p -m 664 conf/QPID-MESSAGING-MIB.txt %{buildroot}%{_datadir}/snmp/mibs


%if 0%{?rhel} < 7
# install the sysVinit script
mkdir -p %{buildroot}%{_initrddir}/
install -p -m 755 etc/%{name} %{buildroot}%{_initrddir}
%else
# install the systemd-units init script
mkdir -p %{buildroot}%{_unitdir}/
install -p -m 664 etc/%{name}.service %{buildroot}%{_unitdir}
%endif

#zip the raw man page
mkdir -p %{buildroot}%{_mandir}/man8/
install -p -m 664 conf/%{name}.8 %{buildroot}%{_mandir}/man8/

popd

%clean
rm -rf %{buildroot}

%post
%if 0%{?fedora} >= 18
  %systemd_post %{name}.service
%else
if [ $1 -eq 1 ] ; then 
    # Initial installation 
    /bin/systemctl daemon-reload >/dev/null 2>&1 || :
fi
%endif

%preun
# recent fedora
%if 0%{?fedora} >= 18
  %systemd_preun %{name}.service
%else
# older rhel use sysVinit srcipts
%if 0%{?rhel} < 7
if [ $1 -eq 0 ] ; then
    /sbin/service %{name} stop >/dev/null 2>&1
    /sbin/chkconfig --del %{name}
fi
%else 
if [ $1 -eq 0 ] ; then
    # Package removal, not upgrade
    /bin/systemctl --no-reload disable %{name}.service > /dev/null 2>&1 || :
    /bin/systemctl stop %{name}.service > /dev/null 2>&1 || :
fi
%endif
%endif

%postun
# recent fedora
%if 0%{?fedora} >= 18
  %systemd_postun_with_restart %{name}.service
%else
# older rhel use sysVinit srcipts
%if 0%{?rhel} < 7
if [ "$1" -ge "1" ] ; then
# just an update
    %{_sbindir}/service %{name} condrestart >/dev/null 2>&1 || :
fi
%else
/bin/systemctl daemon-reload >/dev/null 2>&1 || :
if [ $1 -ge 1 ] ; then
    # Package upgrade, not uninstall
    /bin/systemctl try-restart %{name}.service >/dev/null 2>&1 || :
fi
%endif
%endif

%files
%{_bindir}/%{name}
%doc %{name}/README.txt
%doc %{name}/license.txt
%if 0%{?rhel} < 7
%{_initrddir}/%{name}
%else
%{_unitdir}/%{name}.service
%endif
%config(noreplace) %{_datadir}/snmp/qpid010.conf
%config(noreplace) %{_datadir}/snmp/qpid_snmp.conf
%{_datadir}/snmp/mibs/QPID-MESSAGING-MIB.txt
%{_mandir}/man8/%{name}.8.gz

%changelog
* Wed Dec 12 2012 Ernie Allen <eallen@redhat.com> 1.0.0-9
- Fix for bz 886543 - crashes when displaying brokerLinks

* Tue Dec 11 2012 Ernie Allen <eallen@redhat.com> 1.0.0-8
- Fix for bz 886045 - does not reconnect on broker restart

* Tue Oct 09 2012 Ernie Allen <eallen@redhat.com> 1.0.0-7
- Added the sysVInit scripts back in for rhel < 7

* Wed Oct 03 2012 Ernie Allen <eallen@redhat.com> 1.0.0-6
- Updated to release 6
- Added Requires (post,preun,postun) for scriptlets

* Tue Oct 02 2012 Ernie Allen <eallen@redhat.com> 1.0.0-5
- Updated to release 5
- Use the newer macroized scriptlets for Fedora 18+
- Mark config files as noreplace
 
* Fri Sep 21 2012 Ernie Allen <eallen@redhat.com> 1.0.0-4
- Updated to release 4
- Switched to systed unit file instead of sysv init script
- Removed the step to gzip the man page since it is automatic

* Thu Sep 20 2012 Ernie Allen <eallen@redhat.com> 1.0.0-3
- Updated to release 3
- Removed the global source_dir and used pushd and popd
- Modified referenes to file locations to match original tar file

* Tue Sep 18 2012 Ernie Allen <eallen@redhat.com> 1.0.0-2
- Updated release to 2
- Changed the global _build_dir to source_dir to avoid possible confusion
- Changed the input source zip file to have a directory named qpid-snmpd-src instead
of qpid-snmpd to avoid the naming conflict with the directory and the app name. The source_dir
global now reflects the name change 
- Changed all cp -p to use install macro for consistency

* Sat Sep 15 2012 Ernie Allen <eallen@redhat.com> 1.0.0-1
- Initial version containing /usr/bin/qpid-snmpd installed as root
