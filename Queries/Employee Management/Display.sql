SELECT person.[id_p]
      ,person.[first_name]
      ,person.[last_name]
      ,person.birth_date
      ,employees.hire_date
      ,address.number
      ,address.street
      ,cities.name
      ,cities.postcode
  FROM [dbo].[employees] JOIN [dbo].[person] ON employees.id_p=person.id_p
                       JOIN [dbo].[address] ON person.id_adr=address.id_adr 
                       JOIN [dbo].[cities] ON address.id_city=cities.id_city
  WHERE available = 1; --Only displays the employees that weren't deleted
/*Query used to display information on employees*/