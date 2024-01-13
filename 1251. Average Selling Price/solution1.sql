CREATE TABLE Prices 
(
   product_id INT,
   start_date DATE,
   end_date DATE,
   price INT,
   PRIMARY KEY(product_id,start_date,end_date)
);

CREATE TABLE UnitsSold
(
   product_id INT,
   purchase_date DATE,
   units INT
);

INSERT INTO prices (product_id, start_date, end_date, price)
VALUES
    (1, '2019-02-17', '2019-02-28', 5),
    (1, '2019-03-01', '2019-03-22', 20),
    (2, '2019-02-01', '2019-02-20', 15),
    (2, '2019-02-21', '2019-03-31', 30);
    
INSERT INTO unitssold (product_id, purchase_date, units)
VALUES
    (1, '2019-02-25', 100),
    (1, '2019-03-01', 15),
    (2, '2019-02-10', 200),
    (2, '2019-03-22', 30);

SELECT p.product_id,
IFNULL(ROUND(SUM(u.units * p.price)/SUM(u.units),2),0) AS average_price
FROM prices AS p
JOIN unitssold u
ON (p.product_id = u.product_id 
AND u.purchase_date BETWEEN p.start_date AND p.end_date) 
GROUP BY p.product_id;    




