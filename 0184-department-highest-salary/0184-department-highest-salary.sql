# Write your MySQL query statement below

WITH max_salary AS (
    SELECT departmentId, MAX(Salary) AS max_salary
    FROM Employee
    GROUP BY departmentId
)

SELECT d.name AS Department, e.name AS Employee, e.salary AS Salary
FROM Employee e
JOIN Department d ON e.departmentId = d.id
JOIN max_salary ms ON e.departmentId = ms.departmentId AND e.salary = ms.max_salary;