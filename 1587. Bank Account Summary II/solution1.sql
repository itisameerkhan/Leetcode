CREATE TABLE Users
(
  account INT PRIMARY KEY,
  name VARCHAR(30)
);

CREATE TABLE Transactions
(
  trans_id INT PRIMARY KEY,
  account INT,
  amount INT,
  transacted_on DATE
);

INSERT INTO users (account, name)
VALUES
    ('900001', 'Alice'),
    ('900002', 'Bob'),
    ('900003', 'Charlie');
    
INSERT INTO transactions (trans_id, account, amount, transacted_on)
VALUES
  (1, 900001, 7000, '2020-08-01'),
  (2, 900001, 7000, '2020-09-01'),
  (3, 900001, -3000, '2020-09-02'),
  (4, 900002, 1000, '2020-09-12'),
  (5, 900003, 6000, '2020-08-07'),
  (6, 900003, 6000, '2020-09-07'),
  (7, 900003, -4000, '2020-09-11');
  

SELECT name, SUM(amount) AS balance
FROM Users 
LEFT JOIN transactions
ON Users.account = transactions.account
GROUP BY users.account
HAVING SUM(amount) > 10000;
    
