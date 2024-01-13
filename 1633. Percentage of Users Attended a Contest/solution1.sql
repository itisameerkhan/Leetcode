CREATE TABLE Users
(
  user_id INT PRIMARY KEY,
  user_name VARCHAR(20)
);

CREATE TABLE Register
( 
  contest_id INT,
  user_id INT,
  PRIMARY KEY(contest_id,user_id)
);

INSERT INTO users (user_id, user_name) VALUES
(6, 'Alice'),
(2, 'Bob'),
(7, 'Alex');

INSERT INTO register (contest_id, user_id)
VALUES
(215, 6),
(209, 2),
(208, 2),
(210, 6),
(208, 6),
(209, 7),
(209, 6),
(215, 7),
(208, 7),
(210, 2),
(207, 2),
(210, 7);

SELECT contest_id, ROUND((COUNT(DISTINCT user_id)/(SELECT COUNT(user_id) FROM Users)*100),2) AS percentage 
FROM Register 
GROUP BY contest_id
ORDER BY percentage DESC,contest_id ASC;