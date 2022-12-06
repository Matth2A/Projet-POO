SELECT person.first_name,
       person.last_name,
       orders.* FROM [dbo].[orders]
    JOIN [dbo].[clients] ON orders.id_client=clients.id_client
    JOIN [dbo].[person] ON clients.id_p=person.id_p;
/*Query used to display all of the orders, including the name of the client who took it*/