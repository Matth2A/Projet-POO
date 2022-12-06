DECLARE @QUANTITY INT;
SET @QUANTITY = 2; /*Quantity to add to order*/
DECLARE @ITEM INT;
SET @ITEM = 1; /*ID of the item to add to order*/
IF (SELECT (SELECT available_quantity FROM items WHERE id_item = @ITEM)-@QUANTITY)>=0
    INSERT INTO has_item VALUES(@ITEM, 2, @QUANTITY,(SELECT taxless_price FROM items WHERE id_item=@ITEM),(SELECT tax FROM items WHERE id_item=@ITEM));
    UPDATE [dbo].[items] set available_quantity = available_quantity-@QUANTITY WHERE id_item=@ITEM;
/*Query used to add a certain amount (@QUANTITY) of a certain item (@ITEM) to an order
whose ID is the second value in the 6th line.
It only adds the items if enough items are available, and makes sure to remove the amount of items
added from the stock*/