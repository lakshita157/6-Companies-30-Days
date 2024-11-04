# Write your MySQL query statement below
SELECT 
    MAX(DISTINCT num) as num
FROM (
    SELECT num FROM MyNumbers GROUP BY num HAVING count(num)=1) 
    as new_MyNumbers
-- group by num; 