# Write your MySQL query statement below
-- with act as (
-- select machine_id, max(timestamp) - min(timestamp) as timediff
-- from Activity
-- group by machine_id, process_id
-- )

-- select machine_id, round(sum(timediff)/count(machine_id), 3) as processing_time
-- from act
-- group by machine_id 


-- select a1.machine_id, round(sum(a2.timestamp - a1.timestamp)/count(a1.machine_id), 3) as processing_time
-- from Activity a1 join Activity a2 
--     on a1.machine_id = a2.machine_id and a1.process_id = a2.process_id and
--     a1.activity_type = 'start' and a2.activity_type = 'end'
-- group by machine_id


select a1.machine_id, round(avg(a2.timestamp - a1.timestamp), 3) as processing_time
from Activity a1 join Activity a2 
    on a1.machine_id = a2.machine_id and a1.process_id = a2.process_id and
    a1.activity_type = 'start' and a2.activity_type = 'end'
group by machine_id
