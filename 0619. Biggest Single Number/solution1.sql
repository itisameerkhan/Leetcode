CREATE TABLE MyNumbers
(
    num INT
);

INSERT INTO MyNumbers VALUES
(8),
(8),
(3),
(3),
(1),
(4)
(5),
(6);

SELECT MAX(num) AS num
FROM MyNumbers 
WHERE num IN (
  SELECT num FROM MyNumbers
  GROUP BY num 
  HAVING COUNT(*)=1
);