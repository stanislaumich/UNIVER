rem mysql -v -u root -p db < /tmp/dump.sql

rem ������������ MySQL ����:
chcp 1251
c:
rem rar e back
cd "Program Files\MySQL\MySQL Server 8.0\bin"
mysql.exe  -uroot -hlocalhost -pRoot12Root firma9 < s:\MYSQL_BACKUP\backup.dmp

rem ������������ MySQL ���� �� zip ������:

rem unzip -p dump.sql.zip | mysql -u root -p%pass% database%
rem ������������ .sql.gz ����:
rem gunzip -c dump.sql.gz | mysql -uroot -hlocalhost -p%pass% %database%
pause