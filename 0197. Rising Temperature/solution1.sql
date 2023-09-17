CREATE TABLE Weather
(
    id INT PRIMARY KEY,
    recordDate DATE,
    temperature INT
);

INSERT INTO Weather VALUES(1,'2015-01-01',10);
INSERT INTO Weather VALUES(2,'2015-01-02',25);
INSERT INTO Weather VALUES(3,'2015-01-03',20);
INSERT INTO Weather VALUES(4,'2015-01-04',30);

SELECT * FROM weather;

SELECT w1.id
FROM Weather w1
JOIN Weather w2 ON w1.recordDate = DATE_ADD(w2.recordDate, INTERVAL 1 DAY)
WHERE w1.temperature > w2.temperature;




