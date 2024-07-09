# Write your MySQL query statement below
-- 조인 풀이
-- select person_name
-- from Queue q1 left join (
--    select q1.person_id, sum(q2.weight) as total_weight 
--     from Queue q1 join Queue q2 on q1.turn >= q2.turn
--     group by q1.turn) as q2 using(person_id)
-- where total_weight <= 1000
-- order by total_weight desc
-- limit 1

-- over 함수를 사용한 풀이
with p as (
select *, sum(weight) over(order by turn) as total_sum
from Queue)

select person_name
from p
where total_sum <= 1000
order by total_sum desc
limit 1
