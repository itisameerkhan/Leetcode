Create Table If Not Exists Insurance 
(
 pid int PRIMARY KEY,  
 tiv_2015 float,
 tiv_2016 float, 
 lat float NOT NULL, 
 lon float NOT NULL	
);
 
insert into Insurance (pid, tiv_2015, tiv_2016, lat, lon) values ('1', '10', '5', '10', '10');
insert into Insurance (pid, tiv_2015, tiv_2016, lat, lon) values ('2', '20', '20', '20', '20');
insert into Insurance (pid, tiv_2015, tiv_2016, lat, lon) values ('3', '10', '30', '20', '20');
insert into Insurance (pid, tiv_2015, tiv_2016, lat, lon) values ('4', '10', '40', '40', '40');

SELECT ROUND(SUM(DISTINCT i1.tiv_2016),2) AS tiv_2016
FROM insurance i1, insurance i2
WHERE i1.tiv_2015 = i2.tiv_2015
AND i1.pid <> i2.pid 
AND i1.pid NOT IN 
(
  SELECT DISTINCT a.pid 
  FROM insurance a, insurance b
  WHERE a.pid <> b.pid 
  AND a.lat = b.lat
  AND a.lon = b.lon
);


