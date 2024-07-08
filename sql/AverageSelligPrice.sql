# Write your MySQL query statement below
select p.product_id, if(u.purchase_date is null, 0, round(sum(price*units)/sum(units), 2))  as average_price
from Prices p left join UnitsSold u using(product_id)
where u.purchase_date between p.start_date and p.end_date or
    u.purchase_date is null
group by p.product_id
