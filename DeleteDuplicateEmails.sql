# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
DELETE FROM Person WHERE id NOT IN (SELECT t.id as id FROM (SELECT min(id) as id FROM Person GROUP BY email) t);
