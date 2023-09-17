CREATE TABLE Users 
(
  user_id INT PRIMARY KEY,
  name VARCHAR(30),
  mail VARCHAR(30)
);


INSERT INTO users (user_id, name, mail)
VALUES
    (1, 'Winston', 'winston@leetcode.com'),
    (2, 'Jonathan', 'jonathanisgreat'),
    (3, 'Annabelle', 'bella-@leetcode.com'),
    (4, 'Sally', 'sally.come@leetcode.com'),
    (5, 'Marwan', 'quarz#2020@leetcode.com'),
    (6, 'David', 'david69@gmail.com'),
    (7, 'Shapiro', '.shapo@leetcode.com');

SELECT user_id, name, mail
FROM Users
WHERE mail REGEXP '^[a-z][a-z0-9_.-]*[@]leetcode[.]com$';

    
    
