CREATE TABLE Delivery (
	delivery_id INT PRIMARY KEY,
    customer_id INT,
    order_date DATE,
	customer_pref_delivery_date DATE
);

insert into Delivery (delivery_id, customer_id, order_date, customer_pref_delivery_date) values ('1', '1', '2019-08-01', '2019-08-02');
insert into Delivery (delivery_id, customer_id, order_date, customer_pref_delivery_date) values ('2', '2', '2019-08-02', '2019-08-02');
insert into Delivery (delivery_id, customer_id, order_date, customer_pref_delivery_date) values ('3', '1', '2019-08-11', '2019-08-12');
insert into Delivery (delivery_id, customer_id, order_date, customer_pref_delivery_date) values ('4', '3', '2019-08-24', '2019-08-24');
insert into Delivery (delivery_id, customer_id, order_date, customer_pref_delivery_date) values ('5', '3', '2019-08-21', '2019-08-22');
insert into Delivery (delivery_id, customer_id, order_date, customer_pref_delivery_date) values ('6', '2', '2019-08-11', '2019-08-13');
insert into Delivery (delivery_id, customer_id, order_date, customer_pref_delivery_date) values ('7', '4', '2019-08-09', '2019-08-09');

WITH cte AS (
SELECT 
	customer_id, 
    MIN(order_date) AS min_order_date,
    MIN(customer_pref_delivery_date) AS min_order_pref
FROM delivery
GROUP BY customer_id
)

SELECT ROUND(SUM(CASE WHEN min_order_date = min_order_pref THEN 1 ELSE 0 END)/COUNT(DISTINCT customer_id)*100,2)
AS immediate_percentage
FROM cte;
