# Write your MySQL query statement below
-- select class
-- from Courses 
-- group by class
-- having count(student) >= 5

select class
from (
    select class, count(student) as cnt
    from Courses
    group by class
) as t
where t.cnt >= 5
