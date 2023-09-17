CREATE TABLE Followers
(
  user_id INT,
  follower_id INT,
  PRIMARY KEY(user_id,follower_id)
);

INSERT INTO Followers VALUES(0,1),(1,0),(2,0),(2,1);

SELECT user_id, COUNT(follower_id) AS follower_count
FROM Followers 
GROUP BY user_id
ORDER BY user_id;

use leetcode;