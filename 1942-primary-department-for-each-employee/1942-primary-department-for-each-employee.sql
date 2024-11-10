# Write your MySQL query statement below
SELECT DISTINCT employee_id,  department_id
FROM Employee
WHERE primary_flag = 'Y'
    OR employee_id NOT IN (SELECT employee_id FROM employee WHERE primary_flag = 'Y' )
ORDER BY employee_id;