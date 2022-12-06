UPDATE [dbo].[items] set available = 0 WHERE id_item=2; -- In this case, the item whose id is 2 is deleted from the catalog
/*Query used to delete an item from the catalog. It does so by setting the available boolean to 0, which implies that the item is not in
the catalog anymore, its data is just kept for legal record*/