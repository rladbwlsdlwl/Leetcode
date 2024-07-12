# Write your MySQL query statement below
with n as ( 
    select num
    from Mynumbers
    group by num
    having count(num) = 1 
)

select max(num) as num
from n
