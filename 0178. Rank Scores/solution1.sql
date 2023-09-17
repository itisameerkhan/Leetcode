CREATE TABLE Scores
(
  id INT PRIMARY KEY,
  score DECIMAL(3,2)
);

INSERT INTO scores (id, score)
VALUES (1, 3.50),
       (2, 3.65),
       (3, 4.00),
       (4, 3.85),
       (5, 4.00),
       (6, 3.65);
       
SELECT score, DENSE_RANK()
OVER (ORDER BY score DESC) AS ranking
FROM Scores;
