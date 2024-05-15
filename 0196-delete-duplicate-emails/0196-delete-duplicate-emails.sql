# Write your MySQL query statement below
DELETE FROM PERSON
WHERE id not in
(
select id
from(
SELECT id,email,
RANK() OVER( PARTITION BY email ORDER BY id) as "rank"
from person
) a
where a.rank=1)