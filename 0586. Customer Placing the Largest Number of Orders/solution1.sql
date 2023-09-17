USE Leetcode;

CREATE TABLE Orders
( 
    order_number INT PRIMARY KEY,
    customer_number INT
);

INSERT INTO Orders VALUES(1,1);
INSERT INTO Orders VALUES(2,2);
INSERT INTO Orders VALUES(3,3);
INSERT INTO Orders VALUES(4,3);

DELETE FROM Orders;

SELECT (SELECT MAX(customer_number) FROM Orders);

SELECT MAX(customer_number) AS customer_number FROM Orders;

SELECT customer_number FROM Orders 
GROUP BY customer_number 
ORDER BY COUNT(customer_number) DESC LIMIT 1;











