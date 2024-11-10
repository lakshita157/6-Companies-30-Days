# Write your MySQL query statement below
SELECT
   e.employee_id , e.name, count(e.employee_id ) as reports_count, round(avg(e2.age)) as average_age
FROM Employees e
JOIN Employees e2
ON e.employee_id = e2.reports_to
GROUP BY e.employee_id, e.name
ORDER BY e.employee_id;