# Write your MySQL query statement below
SELECT  id, movie, description, rating 
FROM Cinema where
    id%2!=0 and description != 'boring'
    group by id
    order by rating desc;

