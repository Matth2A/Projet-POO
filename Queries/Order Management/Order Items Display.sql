SELECT [items].[reference],
       [items].[name],
       [has_item].[quantity],
       [has_item].[taxless_price],
       [has_item].[tax]
FROM [dbo].[has_item] JOIN [dbo].[items] ON has_item.id_item=items.id_item
WHERE id_order = 2; -- In this case, the order's id is 2
/*Query used to display all the items in an order*/