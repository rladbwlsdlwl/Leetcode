# Write your MySQL query statement below
select e.employee_id, e.name, count(et.reports_to) as reports_count, round(avg(et.age), 0) as average_age
from Employees e join employees et on e.employee_id = et.reports_to
-- where et.reports_to is not null
group by e.employee_id
-- having count(et.reports_to) > 0
order by e.employee_id
