-- a ��� �� ���������� ������ ������� ����� ����� ������� ��  ������ ����

SELECT name , data , summa 
  FROM schet s, firma9 f
 WHERE f.idschet = s.id AND s.data = '13/07/2006' AND s.credit = 'Y'
UNION
SELECT name , data, summa
  FROM schet s, postav f
 WHERE f.idschet = s.id AND s.data = '13/07/2006' AND s.credit = 'Y'
UNION
SELECT fio name, data , summa
  FROM schet s, client f
 WHERE f.idschet = s.id AND s.data = '13/07/2006' AND s.credit = 'Y'
--
--
-- b ���������� ����������� ����� � ������ ��������� ������ �����


SELECT uradr, phone FROM firma9

--
-- c ��� �� ����������� ������ ����� ��� ������ �� ������ �� ������ ����

SELECT FIO
  FROM sotrud
 WHERE data = '21/07/2018'

--
-- d ��� �� ����������� ����� ������ �� ����� ����������� ��������?

SELECT p.name, s.summa
  FROM postav p, schet s
 WHERE s.id = p.idschet AND s.Credit = 'Y' AND s.summa > 379
 
 
 --
 -- e ����� ����������� ������ ��������, ������� �������� ������ �� ������ ����
 
SELECT c.fio, c.adr
  FROM client c, zakaz z
 WHERE z.idclient = c.id AND z.data = '02/11/2020'