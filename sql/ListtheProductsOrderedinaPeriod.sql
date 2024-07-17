# Write your MySQL query statement below
 
with od as (
    select product_id, sum(unit) as unit_sum
    from Orders
    where order_date between "2020-02-01" and "2020-02-29"
    group by product_id
)

select product_name, unit_sum as unit
from Products p left join od using(product_id)
where unit_sum >= 100
