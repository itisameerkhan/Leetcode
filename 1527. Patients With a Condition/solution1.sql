CREATE TABLE Patients
(
  patient_id INT PRIMARY KEY,
  patient_name VARCHAR(30),
  conditions VARCHAR(50)
);

INSERT INTO Patients VALUES(1,'Daniel','YFEV COUGH');
INSERT INTO Patients(patient_id,patient_name) VALUES(2,'Alice');
INSERT INTO Patients VALUES(3,'Bob','DIAB100 MYOP');
INSERT INTO Patients VALUES(4,'George','ACNE DIAB100');
INSERT INTO Patients VALUES(5,'Alain','DIAB201');

SELECT * FROM patients 
WHERE conditions LIKE 'DIAB1%' OR conditions LIKE '% DIAB1%';


