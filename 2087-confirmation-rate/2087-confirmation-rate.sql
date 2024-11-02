# Write your MySQL query statement below
SELECT 
    s.user_id, 
    round(sum(case when c.action = 'confirmed' then 1 else 0 end )/ count(*),2) as confirmation_rate
FROM Signups s
LEFT JOIN Confirmations c
on (s.user_id  = c.user_id )
group by s.user_id;