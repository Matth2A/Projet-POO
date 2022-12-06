/*Delivery address*/
INSERT INTO address VALUES(
    '25', /*Number*/
    'Rue de la Moselle', /*Street*/
    '', /*Additional Info*/
    (SELECT id_city
        FROM cities WHERE name LIKE 'Nancy' AND postcode LIKE '54000')
);
DECLARE @ADREXP INT;
SET @ADREXP = SCOPE_IDENTITY(); -- The delivery address is kept
/*Billing address*/
INSERT INTO address VALUES(
    '28', /*Number*/
    'Avenue de la société', /*Street*/
    '', /*Additional Info*/
    (SELECT id_city
        FROM cities WHERE name LIKE 'Nancy' AND postcode LIKE '54000')
);
INSERT INTO dbo.orders VALUES(CONVERT(date, GETDATE()),CONVERT(date, GETDATE()+4),0,1,@ADREXP,SCOPE_IDENTITY());
-- The first value is the issue date, here set to the current date
-- The second value is the expected delivery date, here set to 4 days past the current date
-- The third value is the discount in %, here no discount is applied to the order so it's set to 0
-- The fourth value is the id_c of the client who takes the order
-- The fifth value is the delivery address, and the sixth is the billing one
/*Query used to create a new order, as well as create the two addresses needed for it (delivery and billing)*/