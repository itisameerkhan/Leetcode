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

SELECT employee_id FROM Employees
WHERE manager_id <> ALL (
    SELECT employee_id 
    FROM Employees
) 
AND salary < 3000
ORDER BY employee_id; 

