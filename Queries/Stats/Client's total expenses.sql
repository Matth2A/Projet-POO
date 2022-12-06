SELECT 
    SUM((has_item.taxless_price*has_item.quantity*(1+(tax/100))*(1-(discount/100))))
        FROM [dbo].[orders]
        JOIN [dbo].[has_item] ON orders.id_order = has_item.id_order
        WHERE orders.id_client=1;
/*Query used to display a client's total expenses, including taxes and potential discount*/