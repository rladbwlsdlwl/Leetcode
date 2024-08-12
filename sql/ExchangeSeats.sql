# Write your MySQL query statement below

(select s1.id, if(s2.student is null, s1.student, s2.student) as student
from Seat s1 left join Seat s2 on s1.id + 1 = s2.id
where s1.id % 2 = 1

union

select s1.id, s2.student 
from Seat s1 left join Seat s2 on s1.id - 1 = s2.id
where s1.id % 2 = 0
) order by id
