CREATE TABLE Person
(
    id INT PRIMARY KEY,
    email VARCHAR(20)
);

INSERT INTO Person VALUES(1,'john@example.com');
INSERT INTO Person VALUES(2,'bob@example.com');
INSERT INTO Person VALUES(3,'john@example.com');

DELETE p1 FROM Person AS p1, Person AS p2
WHERE p1.email = p2.email AND p1.id > p2.id;

SELECT * FROM Person;