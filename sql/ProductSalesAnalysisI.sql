# Write your MySQL query statement below
select product_name, year, price
from Sales s left join Product p using(product_id)
