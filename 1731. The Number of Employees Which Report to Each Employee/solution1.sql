CREATE TABLE Employees
(
  employee_id INT PRIMARY KEY,
  name VARCHAR(30),
  reports_to INT NULL,
  age INT
);
INSERT INTO employees (employee_id, name, reports_to, age)
VALUES
    (9, 'Hercy', NULL, 43),
    (6, 'Alice', 9, 41),
    (4, 'Bob', 9, 36),
    (2, 'Winston', NULL, 37);


select e1.employee_id, e1.name, COUNT(e2.reports_to) AS reports_count,
     ROUND(AVG(e2.age*1.00),0) AS average_age
     from employees as e1
     join employees e2
     on e1.employee_id = e2.reports_to
     GROUP BY e1.employee_id, e1.name
     HAVING COUNT(e2.reports_to) >= 1
     ORDER BY employee_id;
  
  
  