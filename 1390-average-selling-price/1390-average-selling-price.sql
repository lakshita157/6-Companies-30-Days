# Write your MySQL query statement below
SELECT DISTINCT p.product_id ,
   ifnull (round(sum(p.price*u.units)/sum(u. units),2),0) as  average_price
    from Prices p
    Left join UnitsSold u
    on p.product_id  = u.product_id 
    where u.purchase_date between p.start_date  and p.end_date or u.purchase_date is null
    group by u.product_id ;