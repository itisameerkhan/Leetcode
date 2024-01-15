CREATE TABLE sales 
(
	sale_id INT,
    product_id INT,
    year INT,
    quantity INT,
    price INT,
    PRIMARY KEY(sale_id, year),
    FOREIGN KEY (product_id) REFERENCES product(product_id)
);

insert into sales (sale_id, product_id, year, quantity, price) values ('1', '100', '2008', '10', '5000');
insert into sales (sale_id, product_id, year, quantity, price) values ('2', '100', '2009', '12', '5000');
insert into sales (sale_id, product_id, year, quantity, price) values ('7', '200', '2011', '15', '9000');

CREATE TABLE product 
(
	product_id INT PRIMARY KEY,
    product_name VARCHAR(255)
);

insert into Product (product_id, product_name) values ('100', 'Nokia');
insert into Product (product_id, product_name) values ('200', 'Apple');
insert into Product (product_id, product_name) values ('300', 'Samsung');

SELECT product_id, year AS first_year, quantity, price FROM sales 
WHERE (product_id, year) IN (
	SELECT product_id, MIN(year) 
    FROM sales 
    GROUP BY product_id
);

