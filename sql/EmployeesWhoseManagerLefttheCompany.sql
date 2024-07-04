# Write your MySQL query statement below
with emp as (
    select employee_id, manager_id
    from Employees
    where salary < 30000 and manager_id is not null
)

select employee_id
from emp
where employee_id not in (
    select e1.employee_id
    from emp e1 left join Employees e2 on e1.manager_id = e2.employee_id
    where e2.employee_id is not null
)
order by employee_id
