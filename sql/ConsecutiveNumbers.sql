# Write your MySQL query statement below
select distinct num as ConsecutiveNums
from Logs
where (id, num) in (select * from Logs) and
    (id+1, num) in (select * from Logs) and
    (id+2, num) in (select * from Logs)
