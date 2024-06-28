# Write your MySQL query statement below
(
    select e.name as results
    from (
        select u.name as name, count(*) as cnt
        from Users u join MovieRating m using(user_id)
        group by u.user_id
    ) e
    order by cnt desc, name asc
    limit 1
)
union all
(
    select t.title as results
    from (
        select m.title as title, avg(e.rating) as avg
        from Movies m join MovieRating e using(movie_id)
        where '2020-02-01' <= e.created_at and e.created_at <= '2020-02-29'
        group by m.movie_id
    ) t
    order by avg desc, title asc
    limit 1
)
