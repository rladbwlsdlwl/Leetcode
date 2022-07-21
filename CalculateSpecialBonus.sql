# Write your MySql query statement below

# SELECT * FROM (
#     (SELECT employee_id, salary as bonus FROM Employees WHERE employee_id%2=1 and NOT name LIKE 'M%') 
#         UNION
#     (SELECT employee_id, 0 as bonus FROM Employees WHERE employee_id%2=0 or name LIKE 'M%')
# ) e ORDER BY e.employee_id;

SELECT employee_id, if(employee_id&1=1 AND NAME NOT LIKE 'M%', salary, 0) as bonus FROM Employees ORDER BY employee_id;p:
