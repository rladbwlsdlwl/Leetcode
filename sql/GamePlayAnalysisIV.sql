# Write your MySQL query statement below
with actv as (
    select player_id, min(event_date) as event_date
    from Activity
    group by player_id 
)
select round(sum(if(a2.event_date is not null, 1, 0))/count(distinct a1.player_id), 2) as fraction
from Activity a1 join actv a2 
    on a1.player_id = a2.player_id and datediff(a1.event_date, a2.event_date) = 1 
