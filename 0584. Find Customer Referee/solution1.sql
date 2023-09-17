CREATE TABLE Customer 
(
    id INT PRIMARY KEY,
    name VARCHAR(30),
    referee_id INT
);

INSERT INTO Customer VALUES
(1,"Will",null),
(2,"Jane",null),
(3,"Alex",2),
(4,"Bill",null),
(5,"Zack",1),
(6,"Mark",2);

SELECT name FROM Customer
WHERE referee_id <> 2 OR referee_id IS NULL;