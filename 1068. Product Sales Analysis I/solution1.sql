CREATE TABLE Sales
(
   sale_id INT PRIMARY KEY,
   product_id INT,
   year INT,
   quantity INT,
   price INT,
   CONSTRAINT fk_product_id FOREIGN KEY (product_id) REFERENCES Product(product_id)
);

CREATE TABLE Product
(   
   product_id INT PRIMARY KEY,
   product_name VARCHAR(20)
);

INSERT INTO Sales VALUES
(1,100,2008,10,5000),
(2,100,2009,12,5000),
(7,200,2011,15,9000);

INSERT INTO Product VALUES
(100,"Nokia"),
(200,"Apple"),
(300,"Samsung");

SELECT product.product_name,sales.year,sales.price
FROM sales
LEFT JOIN product
ON sales.product_id = product.product_id;