# Write your MySQL query statement below
-- select e1.name as name
-- from Employee e1 left join Employee e2 on e1.id = e2.managerId
-- where e2.managerId is not null
-- group by e1.id
-- having count(e1.id) >= 5

select e1.name as name
from Employee e1 join Employee e2 on e1.id = e2.managerId
group by e1.id
having count(e1.id) >= 5
