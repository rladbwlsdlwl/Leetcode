# Write your MySql query statement below
SELECT name as Customers FROM Customers c WHERE c.id NOT IN (SELECT o.customerId FROM Orders o);
# SELECT c.name as Customers FROM Customers c LEFT JOIN Orders o ON c.id=o.customerId WHERE o.customerId IS NULL;
