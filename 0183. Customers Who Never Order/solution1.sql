CREATE TABLE Customers
(
    id INT PRIMARY KEY,
    name VARCHAR(20)
);
CREATE TABLE orders
(
    id INT PRIMARY KEY,
    customerId INT
);

INSERT INTO Customers VALUES
(1,"Joe"),
(2,"Henry"),
(3,"Sam"),
(4,"Max");

SELECT Customers.name AS Customers FROM Customers
LEFT JOIN orders ON customers.id = orders.customerId
WHERE orders.customerId IS NULL;