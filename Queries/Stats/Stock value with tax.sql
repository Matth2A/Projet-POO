SELECT SUM(available_quantity*taxless_price*(1+(tax/100))) FROM [dbo].[items] WHERE available=1;
/*Query used to display the price of the whole stock (with tax)*/