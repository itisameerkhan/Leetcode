
SELECT Person.firstname,Person.lastname,Address.city,Address.state
FROM Person 
LEFT JOIN Address 
ON Person.personId = Address.personId;