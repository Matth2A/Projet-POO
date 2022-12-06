SELECT [id_item]
      ,[reference]
      ,[name]
      ,[available_quantity]
      ,[restock_threshold]
      ,[taxless_price]
      ,[tax]
  FROM [dbo].[items] WHERE available=1;
/*Query used to display the items that are in the catalog (by only showing the ones whose available boolean is set to 1)*/