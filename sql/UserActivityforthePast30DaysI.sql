# Write your MySQL query statement below
-- select activity_date as day, count(distinct user_id) as active_users
-- from Activity 
-- where 0 <= DATEDIFF('2019-07-27', activity_date) and DATEDIFF('2019-07-27', activity_date) < 30
-- group by activity_date

select activity_date as day, count(distinct user_id) as active_users from Activity
group by activity_date
having activity_date between '2019-06-28' and '2019-07-27'
