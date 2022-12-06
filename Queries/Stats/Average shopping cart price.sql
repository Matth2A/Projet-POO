SELECT AVG(price) FROM 
(SELECT 
    SUM((has_item.taxless_price*has_item.quantity*(1+(tax/100))*(1-(discount/100)))) AS price
        FROM [dbo].[orders]
        JOIN [dbo].[has_item] ON orders.id_order = has_item.id_order
        GROUP BY has_item.id_order) AS prices;
/*Query used to show the average shopping cart price, including taxes and potential discount*/