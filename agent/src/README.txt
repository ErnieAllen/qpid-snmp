qpid-snmpd README file

After installation the following files should exist:
/usr/bin/qpid-snmpd            - The snmp application to be run as a daemon
/usr/share/snmp/qpid010.conf   - The application configuration file. 
/usr/share/snmp/qpid_snmp.conf - Contains a line that must be appended to the /usr/share/snmp/snmp.conf file
/etc/rc.d/init.d/qpid-snmpd    - The init script for the application
/usr/share/doc/qpid-snmpd-1.0.0/README.txt
/usr/share/doc/qpid-snmpd-1.0.0/license.txt

Before stating the daemon:

- Edit the file /usr/share/snmp/snmp.conf and append to it the line contained in the file 
/usr/share/snmp/qpid_snmp.conf. (Create the file if it doesn't already exist)
Append the line:
mibs +QPID-MESSAGING-MIB

- Edit the file /usr/share/snmp/qpid010.conf to point to the qpid broker.
In qpid010.conf there is a commented out line
#broker localhost
If the broker is running on a different machine than qpid-snmpd, 
uncomment the line and change the word localhost to the URL of the qpid broker. 
An example is:
broker grid0.lab.bos.redhat.com  

- Edit the file /usr/share/snmp/qpid010.conf and change the rocommunity and rwcommunity strings
The default strings "public" and "private" should be changed to your own values
 
Starting the snmp daemon:
- Ensure nothing else is listening on ports 161 and 162
- Run
>service qpid-snmpd start

Testing:
- Install package net-snmp-utils
- Ensure the qpid-snmpd daemon is running
>service qpid-snmpd status
or
>ps -aef | grep qpid-snmpd

- Use the snmp get utility to fetch the broker uptime attribute
>snmpget -v 2c -c <public> localhost brokerBrokerUptime.0
   where <public> is the rocommunity string in qpid010.conf


