-- # Write your MySQL query statement below
-- select r.contest_id,
-- round(count(distinct user_id)*100 /(select count(user_id)from Users),2)
-- as percentage
-- from
-- Register as r
-- group by
-- contest_id
-- order by percentage desc , contest_id;

select r.contest_id, round(count(u.user_id)/(select count(user_id)from Users) * 100,2) as percentage
from Users u 
right join Register r
on u.user_id = r.user_id 
group by r.contest_id
-- having r.contest_id is not null
order by percentage DESC, r.contest_id ASC