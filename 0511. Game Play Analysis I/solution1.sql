CREATE TABLE activity
(
   player_id INT,
   device_id INT,
   event_date DATE,
   games_played INT DEFAULT 0,
   PRIMARY KEY(player_id,event_date)
);

INSERT INTO activity VALUES
(1,2,"2016-03-01",5),
(1,2,"2016-05-02",6),
(2,3,"2017-06-25",1),
(3,1,"2016-03-02",0),
(3,4,"2018-07-03",5);

SELECT player_id,MIN(event_date) AS first_login
FROM activity GROUP BY player_id;