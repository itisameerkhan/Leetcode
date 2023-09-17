
-- Leetcode 577 Employee Bonus
CREATE TABLE Employee 
(
   empId INT PRIMARY KEY,
   ename VARCHAR(20),
   supervisor INT,
   salary INT
);

CREATE TABLE Bonus
(
   empid INT PRIMARY KEY,
   bonus INT,
   CONSTRAINT fk_empid FOREIGN KEY (empid) REFERENCES Employee(empId)
);
INSERT INTO Employee VALUES(3,'Brad',null,4000);
INSERT INTO Employee VALUES(1,'John',3,1000);
INSERT INTO Employee VALUES(2,'Dan',3,2000);
INSERT INTO Employee VALUES(4,'Thomas',3,4000);

INSERT INTO Bonus VALUES(2,500);
INSERT INTO Bonus VALUES(4,2000);


SELECT employee.ename,bonus.bonus
FROM employee
LEFT JOIN bonus ON employee.empid = bonus.empid
WHERE bonus < 1000 OR bonus IS NULL;








