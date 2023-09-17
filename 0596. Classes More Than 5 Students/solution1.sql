CREATE TABLE Courses
(
    Student VARCHAR(20) PRIMARY KEY,
    class VARCHAR(20)
);

INSERT INTO Courses VALUES
('A','Math'),
('B','English'),
('C','Math'),
('D','Biology'),
('E','Math'),
('F','Computer'),
('G','Math'),
('H','Math'),
('I','Math');

SELECT * FROM Courses;

SELECT class FROM Courses 
GROUP BY class 
HAVING COUNT(class) > 4;