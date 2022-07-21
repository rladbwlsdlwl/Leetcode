# Write your MySql query statement below
# UPDATE Salary SET sex=IF(sex='m', 'f','m');
UPDATE Salary SET sex = CASE 
WHEN sex='f' THEN 'm'
WHEN sex='m' THEN 'f' END;
