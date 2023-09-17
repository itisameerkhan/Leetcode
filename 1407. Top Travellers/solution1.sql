CREATE TABLE Users 
(
  id INT PRIMARY KEY,
  name VARCHAR(30)
);

CREATE TABLE Rides
(
   id INT PRIMARY KEY,
   user_id INT,
   distance INT
);

INSERT INTO users (id, name) VALUES
 (1, 'Alice'), (2, 'Bob'), 
 (3, 'Alex'), (4, 'Donald'), 
 (7, 'Lee'), (13, 'Jonathan'), (19, 'Elvis');
 
 INSERT INTO rides
VALUES
(1,1, 120),
(2,2, 317),
(3,3, 222),
(4,7, 100),
(5,13, 312),
(6,19, 50),
(7,7, 120),
(8,19, 400),
(9,7, 230);

SELECT name, IFNULL(SUM(distance),0) AS travelled_distance 
FROM users
LEFT JOIN rides 
ON users.id = user_id
GROUP BY user_id
ORDER BY travelled_distance DESC, name ASC;
