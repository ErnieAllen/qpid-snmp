Name:           qpid-snmpd
Version:        1.0.0
Release:        1%{?dist}
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

Requires:		net-snmp
Requires(post): chkconfig
Requires(preun): chkconfig

%description
qpid-snmpd - net-snmp agent for Apache qpid. Provides read-only   
information about qpid brokers, queues, messages, exchanges, etc.

%global _build_dir %{name}_build

%prep
%setup -q -c %{name}
mv %{name} %{_build_dir}

%build
%cmake %{_build_dir}
make %{?_smp_mflags}

%install
rm -rf %{buildroot}
make install DESTDIR=%{buildroot}

# install the config files
mkdir -p %{buildroot}%{_datadir}/snmp
cp %{_build_dir}/conf/qpid010.conf %{buildroot}%{_datadir}/snmp
cp  %{_build_dir}/conf/snmp.conf %{buildroot}%{_datadir}/snmp/qpid_snmp.conf

# install the mib
mkdir -p %{buildroot}%{_datadir}/snmp/mibs/
cp %{_build_dir}/conf/QPID-MESSAGING-MIB.txt %{buildroot}%{_datadir}/snmp/mibs

# install the init script
mkdir -p %{buildroot}%{_initrddir}
install -m 755 %{_build_dir}/etc/%{name} %{buildroot}%{_initrddir}

%clean
rm -rf %{buildroot}


%post
%{_sbindir}/chkconfig --add %{name}

%preun
if [ $1 = 0 ] ; then
    %{_sbindir}/service %{name} stop >/dev/null 2>&1
    %{_sbindir}/chkconfig --del %{name}
fi

%postun
if [ "$1" -ge "1" ] ; then
# just an update
    %{_sbindir}/service %{name} condrestart >/dev/null 2>&1 || :
fi

%files
%defattr(-,root,root)

%{_bindir}/%{name}
%doc %{_build_dir}/README.txt
%doc %{_build_dir}/license.txt
%{_initrddir}/%{name}
%{_datadir}/snmp/qpid010.conf
%{_datadir}/snmp/qpid_snmp.conf
%{_datadir}/snmp/mibs/QPID-MESSAGING-MIB.txt

%changelog

* Sat Sep 15 2012 Ernie Allen <eallen@redhat.com> 1.0.0-1
- Initial version containing /usr/bin/qpid-snmpd installed as root
