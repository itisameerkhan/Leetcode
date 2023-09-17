CREATE TABLE Product
( 
   product_id INT PRIMARY KEY,
   product_name VARCHAR(20),
   unit_price INT
);

CREATE TABLE sales 
(  
   seller_id INT,
   product_id INT,
   buyer_id INT,
   sale_date DATE,
   quantity INT,
   price INT,
   CONSTRAINT fk_product_id FOREIGN KEY (product_id) REFERENCES product(product_id)
);

INSERT INTO product VALUES
(1,"S8",1000),
(2,"G4",800),
(3,"iPhone",1400);

INSERT INTO sales VALUES
(1,1,1,"2019-01-21",2,2000),
(1,2,2,"2019-02-17",1,800),
(2,2,3,"2019-06-02",1,800),
(3,3,4,"2019-05-12",2,2800);

SELECT product_id,product_name FROM sales
INNER JOIN product USING(product_id)
GROUP BY product_id
HAVING SUM(IF(sale_date BETWEEN "2019-01-01" 
AND "2019-03-31",1,0)) = SUM(IF(sale_date,1,0));