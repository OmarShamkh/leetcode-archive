# Write your MySQL query statement below
-- select distinct p1.email as Email from Person p1
-- inner join Person p2
-- on p1.email = p2.email
-- where p1.id != p2.id

select email as Email
from Person
group by email
having count(email) > 1