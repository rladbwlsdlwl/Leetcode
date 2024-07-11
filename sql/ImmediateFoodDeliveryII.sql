# Write your MySQL query statement below
with d as (select min(order_date) as order_date, customer_id
from Delivery 
group by customer_id
order by order_date)

select round(avg(if(d1.order_date = d2.customer_pref_delivery_date, "1", "0"))*100, 2) as immediate_percentage
from d d1 left join Delivery d2 on d1.customer_id = d2.customer_id and d1.order_date = d2.order_date
