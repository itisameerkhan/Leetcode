CREATE TABLE employee(
	employee_id INT,
    department_id INT,
    primary_flag ENUM('Y','N'),
    PRIMARY KEY(employee_id, department_id)
);

insert into Employee (employee_id, department_id, primary_flag) values ('1', '1', 'N');
insert into Employee (employee_id, department_id, primary_flag) values ('2', '1', 'Y');
insert into Employee (employee_id, department_id, primary_flag) values ('2', '2', 'N');
insert into Employee (employee_id, department_id, primary_flag) values ('3', '3', 'N');
insert into Employee (employee_id, department_id, primary_flag) values ('4', '2', 'N');
insert into Employee (employee_id, department_id, primary_flag) values ('4', '3', 'Y');
insert into Employee (employee_id, department_id, primary_flag) values ('4', '4', 'N');

SELECT employee_id, department_id 
FROM employee
WHERE primary_flag = 'Y' 
OR employee_id IN (
	SELECT employee_id
    FROM employee
    GROUP BY employee_id
    HAVING COUNT(*) = 1
)
GROUP BY employee_id, department_id;


