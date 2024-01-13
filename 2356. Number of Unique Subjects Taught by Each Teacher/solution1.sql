CREATE TABLE Teacher (
	teacher_id INT,
    subject_id INT,
    dept_id INT,
    PRIMARY KEY(dept_id, subject_id)
);

insert into Teacher (teacher_id, subject_id, dept_id) values ('1', '2', '3');
insert into Teacher (teacher_id, subject_id, dept_id) values ('1', '2', '4');
insert into Teacher (teacher_id, subject_id, dept_id) values ('1', '3', '3');
insert into Teacher (teacher_id, subject_id, dept_id) values ('2', '1', '1');
insert into Teacher (teacher_id, subject_id, dept_id) values ('2', '2', '1');
insert into Teacher (teacher_id, subject_id, dept_id) values ('2', '3', '1');
insert into Teacher (teacher_id, subject_id, dept_id) values ('2', '4', '1');

SELECT teacher_id, COUNT(DISTINCT subject_id) AS cnt
FROM Teacher
GROUP BY teacher_id;