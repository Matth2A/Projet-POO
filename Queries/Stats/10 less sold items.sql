SELECT TOP(10)
       sales.id_item
      ,sales.quantity_sold
      ,items.reference
      ,items.name
      FROM (SELECT    items.id_item
                    ,SUM(has_item.quantity) AS quantity_sold
                FROM [dbo].[items]
                JOIN [dbo].[has_item] ON items.id_item=has_item.id_item
                GROUP BY items.id_item) AS sales JOIN [dbo].[items] ON sales.id_item=items.id_item ORDER BY quantity_sold ASC;
/*Query used to display the 10 less sold items*/