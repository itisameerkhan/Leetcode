CREATE TABLE employees (
	employee_id INT PRIMARY KEY,
    name VARCHAR(255),
    manager_id INT,
    salary INT
);

insert into Employees (employee_id, name, manager_id, salary) values (3, 'Mila', 9, 60301);
insert into Employees (employee_id, name, manager_id, salary) values (12, 'Antonella', null, 31000);
insert into Employees (employee_id, name, manager_id, salary) values (13, 'Emery', null, 67084);
insert into Employees (employee_id, name, manager_id, salary) values (1, 'Kalel', 11, 21241);
insert into Employees (employee_id, name, manager_id, salary) values (9, 'Mikaela', null, 50937);
insert into Employees (employee_id, name, manager_id, salary) values (11, 'Joziah', 6, 28485);

SELECT e1.employee_id FROM employees AS e1
LEFT JOIN employees AS e2
ON e1.manager_id = e2.employee_id
WHERE e1.salary < 30000 AND e1.manager_id IS NOT NULL AND e2.employee_id IS NULL
ORDER BY e1.employee_id;

