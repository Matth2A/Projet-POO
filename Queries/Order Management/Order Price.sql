SELECT 
    SUM((has_item.taxless_price*has_item.quantity*(1+(tax/100))*(1-(discount/100))))
        FROM [dbo].[orders]
        JOIN [dbo].[has_item] ON orders.id_order = has_item.id_order
        WHERE has_item.id_order=2; -- In this case, the order's id is 2
/*Query used to calculate the total price of an order, including taxes and the potential discount*/