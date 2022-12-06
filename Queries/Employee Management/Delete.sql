UPDATE [dbo].[employees] set available = 0 WHERE id_p=4; -- In this example, the employee deleted is the one whose id_p is 4
/*Query used to delete an employee, by setting its "available" boolean to 0,
which implies that the employee will not be used anymore, and will only stay
in the databse for legal record*/
