CREATE TABLE Cinema
(
   id INT PRIMARY KEY,
   movie VARCHAR(20),
   descriptions VARCHAR(30),
   rating DECIMAL(2,1)
);

INSERT INTO Cinema VALUES
(1,'War','Great 3D',8.9),
(2,'Science','fiction',8.5),
(3,'irish','boring',6.2),
(4,'Ice song','Fantacy',8.6),
(5,'House card','Interesting',9.1);

SELECT * FROM Cinema
WHERE id%2 <> 0 AND descriptions <> 'Boring'
ORDER BY rating DESC;










