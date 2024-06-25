# Write your MySQL query statement below
-- select p.project_id, ROUND(sum(experience_years)/count(*), 2) as average_years
-- from Project p join Employee e on p.employee_id = e.employee_id
-- group by p.project_id

select p.project_id, ROUND(avg(e.experience_years), 2) as average_years
from Project p left join Employee e on p.employee_id = e.employee_id
group by p.project_id
