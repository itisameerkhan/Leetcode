USE leetcode;

CREATE TABLE SalesPerson 
(
    sales_id INT PRIMARY KEY,
    name VARCHAR(20),
    salary INT,
    commission_rate INT,
    hire_date DATE
);

CREATE TABLE Company
(
	com_id INT PRIMARY KEY,
    name VARCHAR(20),
    city VARCHAR(20)
);

CREATE TABLE Orders
(
	order_id INT PRIMARY KEY,
    order_date DATE,
    com_id INT,
    sales_id INT,
    amount INT,
    FOREIGN KEY (com_id) REFERENCES Company(com_id),
    FOREIGN KEY (sales_id) REFERENCES SalesPerson(sales_id)
);

INSERT INTO SalesPerson VALUES
(1,'John',100000,6,'2006-4-1'),
(2,'Amy',12000,5,'2010-5-1'),
(3,'Mark',65000,12,'2008-12-25'),
(4,'Pam',25000,25,'2005-1-1'),
(5,'Alex',5000,10,'2007-2-3');

INSERT INTO Company VALUES
(1,'RED','Boston'),
(2,'ORANGE','New York'),
(3,'YELLOW','Boston'),
(4,'GREEN','Austin');


INSERT INTO Orders VALUES
(1,'2014-1-1',3,4,10000),
(2,'2014-2-1',4,5,5000),
(3,'2014-3-1',1,1,50000),
(4,'2014-4-1',1,4,25000);

SELECT S.name FROM SalesPerson AS S
WHERE  S.sales_id NOT IN (
    SELECT O.sales_id FROM Orders AS O,
    Company AS C
    WHERE C.com_id = O.com_id 
    AND C.name = 'RED'
);
 

SELECT salesperson.name FROM salesPerson
WHERE salesperson.sales_id NOT IN (
      SELECT orders.sales_id FROM orders, Company
      WHERE orders.com_id = company.com_id 
      AND company.name = 'red'
);
 
 
 
 
 
 
 