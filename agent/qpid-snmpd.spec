Name:           qpid-snmpd
Version:        1.0.0
Release:        1%{?dist}
Summary:        SNMP agent for Apache qpid

License:        ASL 2.0
URL:            http://eallen.fedorapeople.org/
Source0:        http://eallen.fedorapeople.org/%{name}-%{version}.tar.bz2
Group:          System Environment/Daemons
BuildRoot:      %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)

BuildRequires:  net-snmp
BuildRequires:  qpid-qmf-devel
BuildRequires:  qpid-cpp-client-devel
BuildRequires:  cmake

%description
qpid-snmpd - NetSNMP agent for Apache qpid. Provides read-only   
information about qpid brokers, queues, messages, exchanges, etc.

%global _app    qpid-snmpd

%prep
%setup -q -c %{name}

%build
%cmake %{name}
make %{?_smp_mflags}

%install
rm -rf %{buildroot}
make install DESTDIR=%{buildroot}

%clean
rm -rf %{buildroot}

%files
%{_bindir}/%{_app}
%doc %{name}/README.txt
%doc %{name}/license.txt

%changelog

* Fri Aug 17 2012 Ernie Allen <eallen@redhat.com> 1.0.0-1
- Initial version containing /usr/bin/qpid-snmpd
