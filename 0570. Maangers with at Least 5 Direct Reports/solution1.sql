CREATE TABLE employee 
(
  id INT PRIMARY KEY,
  name VARCHAR(30),
  department VARCHAR(30),
  managerId INT DEFAULT NULL
);

INSERT INTO employee (id, name, department, managerId)
VALUES
    (101, 'John', 'A', null),
    (102, 'Dan', 'A', 101),
    (103, 'James', 'A', 101),
    (104, 'Amy', 'A', 101),
    (105, 'Anne', 'A', 101),
    (106, 'Ron', 'B', 101);
 
    
INSERT INTO employee (id, name, department, managerId)
VALUES
    (101, 'John', 'A', null),
    (102, 'Dan', 'A', 101),
    (103, 'James', 'A', 101),
    (104, 'Amy', 'A', 101),
    (105, 'Anne', 'A', 101),
    (106, 'Ron', 'B', 101),
    (111, 'John', 'A', null),
    (112, 'Dan', 'A', 111),
    (113, 'James', 'A', 111),
    (114, 'Amy', 'A', 111),
    (115, 'Anne', 'A', 111),
    (116, 'Ron', 'B', 111);
    
SELECT e1.name FROM employee e1
INNER JOIN employee e2 
ON e1.id = e2.managerid
GROUP BY e1.id 
HAVING COUNT(*) >= 5; 

