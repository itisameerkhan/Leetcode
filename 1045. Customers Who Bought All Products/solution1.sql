CREATE TABLE customer 
(
	customer_id INT NOT NULL,
    product_key INT,
	FOREIGN KEY (product_key) REFERENCES product(product_key)
);

insert into Customer (customer_id, product_key) values ('1', '5');
insert into Customer (customer_id, product_key) values ('2', '6');
insert into Customer (customer_id, product_key) values ('3', '5');
insert into Customer (customer_id, product_key) values ('3', '6');
insert into Customer (customer_id, product_key) values ('1', '6');

CREATE TABLE product 
(		
	product_key INT PRIMARY KEY
);

insert into Product (product_key) values ('5');
insert into Product (product_key) values ('6');

SELECT customer_id FROM customer
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) = (SELECT COUNT(product_key) FROM product);