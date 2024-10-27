# Write your MySQL query statement below
select machine_id , round(avg(2*if(activity_type="start", -1, 1)*timestamp),3) as processing_time
from Activity
group by machine_id;