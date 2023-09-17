CREATE TABLE employee 
(
    id INT PRIMARY KEY,
    salary INT
);

INSERT INTO employee VALUES(1,100);
INSERT INTO employee VALUES(2,200);
INSERT INTO employee VALUES(3,300);

SELECT * FROM employee;    
    
SELECT salary FROM (
   SELECT salary FROM employee
   ORDER BY salary DESC LIMIT 2
) AS SecondHighestSalary 
  ORDER BY salary LIMIT 1;
  

  
    
    
    