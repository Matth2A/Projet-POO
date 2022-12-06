SELECT SUM(available_quantity*taxless_price) FROM [dbo].[items] WHERE available=1;
/*Query used to display the stock's entire value (without tax)*/