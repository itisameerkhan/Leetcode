
-- LEETCODE 182 Duplicate Emails
CREATE TABLE Person
(
    id INT PRIMARY KEY,
    email VARCHAR(20)
);

INSERT INTO Person VALUES(1,'a@b.com');
INSERT INTO Person VALUES(2,'c@d.com');
INSERT INTO Person VALUES(3,'a@b.com');

SELECT email FROM Person 
GROUP BY email 
HAVING COUNT(*) > 1;