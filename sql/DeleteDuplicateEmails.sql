# Write your MySQL query statement below
delete from Person
where id not in (
    select p.id
    from 
        (select min(id) as id
        from Person
        group by email) p
)

-- delete p1
-- from Person p1, Person p2
-- where p1.email = p2.email and p1.id > p2.id
