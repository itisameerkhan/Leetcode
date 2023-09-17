CREATE TABLE Employee
(
  id INT PRIMARY KEY,
  name VARCHAR(30),
  salary INT,
  departmentId INT,
  CONSTRAINT fk_departmentId FOREIGN KEY (departmentId) 
  REFERENCES Department(id)
);

CREATE TABLE Department
(
  id INT PRIMARY KEY,
  name VARCHAR(30)
);

INSERT INTO employee (id, name, salary, departmentId)
VALUES
  (1, 'Joe', 70000, 1),
  (2, 'Jim', 90000, 1),
  (3, 'Henry', 80000, 2),
  (4, 'Sam', 60000, 2),
  (5, 'Max', 90000, 1);
  
INSERT INTO Department VALUES
(1,'IT'),
(2,'Sales');

SELECT d.name as Department, e.name AS Employee, e.salary AS Salary
FROM Employee AS e
INNER JOIN Department AS d 
ON e.departmentId = d.id
WHERE (e.departmentId, e.salary) IN 
(
  SELECT departmentId, MAX(salary)
  FROM Employee 
  GROUP BY departmentId
);
