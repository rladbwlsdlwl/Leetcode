# Write your MySQL query statement below
# product table에 해당되는 키를 가진 고객 filter
with tmp as (
    select customer_id, c.product_key
    from Customer c join Product p using(product_key)
)
# count(product) 하여 개수가 일치하는 고객을 반환
select customer_id
from tmp
group by customer_id
having count(distinct product_key) in (select count(*) from Product)
