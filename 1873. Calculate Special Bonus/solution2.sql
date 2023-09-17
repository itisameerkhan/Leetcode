CREATE TABLE Employees 
(
  employee_id INT PRIMARY KEY,
  name VARCHAR(30),
  salary INT
);

INSERT INTO employees (employee_id, name, salary)
VALUES (2, 'Meir', 3000),
       (3, 'Michael', 3800),
       (7, 'Addilyn', 7400),
       (8, 'Juan', 6100),
       (9, 'Kannon', 7700);
       
SELECT employee_id, salary  * (name NOT LIKE 'M%' )* (employee_id % 2 <> 0)
AS bonus
FROM Employees
ORDER BY employee_id;
 