CREATE TABLE Products
(
  product_id INT PRIMARY KEY,
  product_name VARCHAR(50),
  product_category VARCHAR(50)
);
CREATE TABLE Orders
(
  product_id INT,
  order_date DATE,
  unit INT,
  CONSTRAINT fk_product FOREIGN KEY (product_id) 
  REFERENCES Products(product_id)
);

INSERT INTO products (product_id, product_name, product_category)
VALUES
    (1, 'Leetcode Solutions', 'Book'),
    (2, 'Jewels of Stringology', 'Book'),
    (3, 'HP', 'Laptop'),
    (4, 'Lenovo', 'Laptop'),
    (5, 'Leetcode Kit', 'T-shirt');
    
INSERT INTO orders (product_id, order_date, unit)
VALUES
  (1, '2020-02-05', 60),
  (1, '2020-02-10', 70),
  (2, '2020-01-18', 30),
  (2, '2020-02-11', 80),
  (3, '2020-02-17', 2),
  (3, '2020-02-24', 3),
  (4, '2020-03-01', 20),
  (4, '2020-03-04', 30),
  (4, '2020-03-04', 60),
  (5, '2020-02-25', 50),
  (5, '2020-02-27', 50),
  (5, '2020-03-01', 50);

SELECT p.product_name,SUM(unit) AS unit FROM products AS p
JOIN orders AS o
ON p.product_id = o.product_id
WHERE order_date BETWEEN "2020-02-01" AND "2020-02-27" 
GROUP BY o.product_id
HAVING SUM(unit) >= 100;





