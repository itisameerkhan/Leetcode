CREATE TABLE Queries
(
   query_name VARCHAR(50),
   result VARCHAR(50),
   position INT,
   rating INT
);

INSERT INTO queries VALUES
('Dog','Golden Retriever',1,5),
('Dog','German Shepard',2,5),
('Dog','Mule',200,1),
('Cat','Shirazi',5,2),
('Cat','Siamese',3,3),
('Cat','Sphynx',7,4);

SELECT query_name,
ROUND(AVG(CAST(rating AS DECIMAL)/position),2) AS quality,
ROUND(COUNT(CASE WHEN rating < 3 THEN 1 END)*100 / COUNT(*),2) 
AS poor_query_percentage
FROM queries
WHERE query_name IS NOT NULL
GROUP BY query_name;

