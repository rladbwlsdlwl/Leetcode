# Write your MySql query statement below
# SELECT w2.id as id FROM Weather w1, Weather w2 WHERE w1.temperature<w2.temperature AND DATE_ADD(w1.recordDate, INTERVAL 1 DAY)=w2.recordDate;
SELECT w1.id as id FROM Weather w1 INNER JOIN Weather w2 ON DATEDIFF(w1.recordDate, w2.recordDate)=1 WHERE w1.temperature>w2.temperature;
