CREATE TABLE Users
(
  user_id INT PRIMARY KEY,
  name VARCHAR(30)
);

INSERT INTO Users VALUES(1,'aLice'),(2,'bOB');

SELECT user_id, CONCAT(UCASE(SUBSTRING(name,1,1)),LCASE(SUBSTRING(name,2))) AS name 
FROM Users
ORDER BY user_id;