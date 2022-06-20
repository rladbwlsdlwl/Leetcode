# Write your MySql query statement below
SELECT email as Email FROM Person p group by p.email having(count(*)>1);
