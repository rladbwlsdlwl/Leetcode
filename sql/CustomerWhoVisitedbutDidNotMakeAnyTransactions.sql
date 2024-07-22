# Write your MySQL query statement below
select customer_id, count(customer_id) as count_no_trans
from Visits 
where (visit_id, customer_id) in (
    select visit_id, customer_id
    from Visits v left join Transactions t using(visit_id)
    where t.visit_id is null 
)
group by customer_id
order by count_no_trans desc
