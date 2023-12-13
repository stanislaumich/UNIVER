set /p place=< s:\place.txt
rem git config --global --add safe.directory 'S:/Контрольные/UNIVER'
git add .
git commit -m "AUTO FROM %place% %date% %time%"
git config --global http.version HTTP/1.1
rem git push
git push origin --force
git config --global http.version HTTP/2
pause