SELECT 
    SUM((has_item.taxless_price*has_item.quantity*(1-(discount/100))))
        FROM [dbo].[orders]
        JOIN [dbo].[has_item] ON orders.id_order = has_item.id_order WHERE MONTH(order_issue_date)=12 AND YEAR (order_issue_date)=2022;
-- Values 12 and 2022 can be changed in the last line, for the wanted month and year
/*Query used to display a specific month's turnover (it sums up the prices of all the items sold, without
including taxes but including discount)*/