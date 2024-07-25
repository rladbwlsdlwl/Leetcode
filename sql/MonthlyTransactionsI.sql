# Write your MySQL query statement below
with trans as (
    select *, date_format(trans_date, "%Y-%m") as month
    from Transactions
)


select month, country, 
    count(*) as trans_count, 
    sum(if(state = "approved", 1, 0)) as approved_count,
    sum(amount) as trans_total_amount, 
    sum(if(state = "approved", amount, 0)) as approved_total_amount
from trans
group by month, country
