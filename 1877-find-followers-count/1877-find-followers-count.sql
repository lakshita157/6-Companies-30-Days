# Write your MySQL query statement below
SELECT
    DISTINCT user_id,  count(user_id) as followers_count
FROM Followers
group by user_id
ORDER BY user_id ASC;

