rem mysql -v -u root -p db < /tmp/dump.sql

rem ������������ MySQL ����:

mysql -uroot -hlocalhost -pKurs12Kurs firma9 < /backup.dmp

rem ������������ MySQL ���� �� zip ������:

rem unzip -p dump.sql.zip | mysql -u root -p%pass% database%
rem ������������ .sql.gz ����:
rem gunzip -c dump.sql.gz | mysql -uroot -hlocalhost -p%pass% %database%