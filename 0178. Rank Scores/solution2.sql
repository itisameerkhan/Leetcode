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


SELECT S2.Score, (SELECT COUNT(DISTINCT S1.Score) 
FROM Scores S1 
WHERE S1.Score >= S2.Score) AS Ranking
FROM Scores S2
ORDER BY Ranking;