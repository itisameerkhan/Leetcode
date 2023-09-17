CREATE TABLE Triangle
(
   x INT,
   y INT,
   z INT,
   PRIMARY KEY(x,y,z)
);

INSERT INTO Triangle VALUES(13,15,30),(10,20,15);


SELECT x,y,z,
CASE 
    WHEN x+y<=z THEN 'No'
    WHEN y+z<=x THEN 'No'
    WHEN x+z<=y THEN 'No'
ELSE 'Yes' END AS 'Triangle'
FROM Triangle;




