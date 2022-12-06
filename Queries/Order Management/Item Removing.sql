DECLARE @ITEM INT;
SET @ITEM = 2; /*Item to remove to order*/
DECLARE @ORDER INT;
SET @ORDER = 2; /*Order to remove item from*/
UPDATE [dbo].[items]
    set available_quantity = available_quantity+(SELECT quantity FROM [dbo].[has_item] WHERE id_item=@ITEM AND id_order=@ORDER)
    WHERE id_item=@ITEM;
DELETE FROM [dbo].[has_item] WHERE id_item=@ITEM AND id_order=@ORDER;
/*Removes an item (@ITEM) from an order (@ORDER) and adds back the quantity of item to the stock*/