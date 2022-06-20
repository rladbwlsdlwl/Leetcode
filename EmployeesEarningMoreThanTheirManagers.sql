# Write your Mysql query statement below
SELECT e.name as Employee FROM Employee e JOIN Employee e_ ON e.managerId=e_.id WHERE e.salary>e_.salary; 
