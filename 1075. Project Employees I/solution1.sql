CREATE TABLE project 
(
   project_id INT,
   employee_id INT,
   PRIMARY KEY (project_id,employee_id),
   CONSTRAINT fk_employee_id FOREIGN KEY (employee_id) REFERENCES Employee(employee_id)
);

CREATE TABLE Employee 
(
   employee_id INT PRIMARY KEY,
   name VARCHAR(20),
   experience_years INT NOT NULL
);

INSERT INTO project VALUES
(1,1),
(1,2),
(1,3),
(2,1),
(2,4);

INSERT INTO employee VALUES
(1,"Khaled",3),
(2,"Ali",2),
(3,"John",1),
(4,"Doe",2);

SELECT project.project_id,ROUND(AVG(experience_years),2) AS average_years
FROM project
LEFT JOIN employee 
ON project.employee_id = employee.employee_id
GROUP BY project_id;

