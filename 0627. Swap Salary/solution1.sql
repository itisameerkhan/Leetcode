CREATE TABLE Salary 
(
    id INT PRIMARY KEY,
    name VARCHAR(20),
    sex ENUM('m','f'),
    salary INT
);

INSERT INTO Salary VALUES(1,'A','m',2500);
INSERT INTO Salary VALUES(2,'B','f',1500);
INSERT INTO Salary VALUES(3,'C','m',5500);
INSERT INTO Salary VALUES(4,'D','f',500);

UPDATE Salary 
SET sex = CASE
WHEN sex = 'm' THEN 'f'
WHEN sex = 'f' THEN 'm'
END;

SELECT * FROM salary;