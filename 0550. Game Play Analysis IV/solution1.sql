CREATE TABLE Activity (
	player_id INT,
    device_id INT,
    event_date DATE,
    games_played INT,
    PRIMARY KEY(player_id, event_date)
);

insert into Activity (player_id, device_id, event_date, games_played) values ('1', '2', '2016-03-01', '5');
insert into Activity (player_id, device_id, event_date, games_played) values ('1', '2', '2016-03-02', '6');
insert into Activity (player_id, device_id, event_date, games_played) values ('2', '3', '2017-06-25', '1');
insert into Activity (player_id, device_id, event_date, games_played) values ('3', '1', '2016-03-02', '0');
insert into Activity (player_id, device_id, event_date, games_played) values ('3', '4', '2018-07-03', '5');

WITH cte AS (
	SELECT 
		player_id, 
        MIN(event_date) AS first_login,
        DATE_ADD(MIN(event_date), INTERVAL 1 DAY) AS next_date
    FROM activity
    GROUP BY player_id
)

SELECT 
ROUND((SELECT 
			COUNT(DISTINCT player_id) 
	   FROM activity 
	   WHERE (player_id, event_date) 
IN (SELECT 
		player_id, next_date 
	FROM cte))
/
(SELECT 
	COUNT(DISTINCT player_id) 
    FROM activity),2) AS fraction;
