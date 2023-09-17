CREATE TABLE employee 
(
    id INT PRIMARY KEY,
    salary INT
);

INSERT INTO employee VALUES(1,100);
INSERT INTO employee VALUES(2,200);
INSERT INTO employee VALUES(3,300);

SELECT * FROM employee;    
    
SELECT MAX(salary) AS SecondHighestSalary FROM employee 
WHERE salary < (SELECT MAX(salary) FROM employee);
    
    
    
    
    