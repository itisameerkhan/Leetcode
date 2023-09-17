CREATE TABLE employee
(
    id INT PRIMARY KEY,
    ename VARCHAR(20),
    salary INT,
    managerId INT
);

INSERT INTO employee VALUES(1,'Joe',70000,3);
INSERT INTO employee VALUES(2,'Henry',80000,4);
INSERT INTO employee VALUES(3,'Sam',60000,NULL);
INSERT INTO employee VALUES(4,'Max',90000,NULL);

SELECT * FROM employee;

SELECT e.ename AS Employee FROM employee AS e
WHERE salary > (SELECT salary FROM employee WHERE e.managerId = id);

