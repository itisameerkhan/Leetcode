CREATE TABLE employee 
(
  id INT PRIMARY KEY,
  name VARCHAR(30),
  salary INT,
  departmentID INT,
  CONSTRAINT fk_departmentID FOREIGN KEY (departmentID) 
  REFERENCES Department(id)
);

CREATE TABLE department
(
  id INT PRIMARY KEY,
  name VARCHAR(30)
);

INSERT INTO employee (id, name, salary, departmentId)
VALUES
  (1, 'Joe', 85000, 1),
  (2, 'Henry', 80000, 2),
  (3, 'Sam', 60000, 2),
  (4, 'Max', 90000, 1),
  (5, 'Janet', 69000, 1),
  (6, 'Randy', 85000, 1),
  (7, 'Will', 70000, 1);

INSERT INTO department (id, name)
VALUES
  (1, 'IT'),
  (2, 'Sales');


SELECT department.name AS Department, 
employee.name AS Employee, employee.salary
FROM employee 
INNER JOIN department 
ON employee.departmentid = department.id
ORDER BY department.name;

(SELECT department.name AS Department, 
employee.name AS Employee, employee.salary
FROM employee 
INNER JOIN department 
ON employee.departmentid = department.id
WHERE department.name = 'IT'
ORDER BY salary DESC, Employee ASC
LIMIT 4)
UNION 
(SELECT department.name AS Department, 
employee.name AS Employee, employee.salary
FROM employee 
INNER JOIN department 
ON employee.departmentid = department.id
WHERE department.name = 'Sales'
ORDER BY salary DESC, Employee ASC
LIMIT 3)



