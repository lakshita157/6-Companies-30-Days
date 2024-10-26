# Write your MySQL query statement below
SELECT customer_id, COUNT(customer_id) as count_no_trans
FROM Visits as  v
Left join Transactions as t
on v.visit_id = t.visit_id
where t.transaction_id is null
group by customer_id;