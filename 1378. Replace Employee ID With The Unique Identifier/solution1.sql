CREATE TABLE Employees 
(
  id INT PRIMARY KEY,
  name VARCHAR(30)
);

CREATE TABLE EmployeeUNI
(
  id INT,
  unique_id INT, 
  PRIMARY KEY(id,unique_id)
);

INSERT INTO Employees VALUES 
(1,'Alice'),
(7,'Bob'),
(11,'Meir'),
(90,'Winston'),
(3,'Jonathan');

INSERT INTO EmployeeUNI VALUES 
(3,1),
(11,2),
(90,3);

SELECT unique_id, name FROM 
Employees
LEFT JOIN EmployeeUNI 
ON Employees.id = EmployeeUNI.id;
