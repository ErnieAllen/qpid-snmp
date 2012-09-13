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

%description
qpid-snmpd - NetSNMP agent for Apache qpid. Provides read-only   
information about qpid brokers, queues, messages, exchanges, etc.

%global _app    qpid-snmpd
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

%clean
rm -rf %{buildroot}

%files
%{_bindir}/%{_app}
%doc %{_build_dir}/README.txt
%doc %{_build_dir}/license.txt
/usr/local/share/snmp/ %{_build_dir}/conf/qpid010.conf
/etc/init.d/ %{_build_dir}/etc/qpid-snmpd

%changelog

* Fri Aug 17 2012 Ernie Allen <eallen@redhat.com> 1.0.0-1
- Initial version containing /usr/bin/qpid-snmpd
