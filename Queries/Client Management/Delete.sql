UPDATE [dbo].[clients] set available = 0 WHERE id_p=2; -- In this example, the client deleted is the one whose id_p is 2
/*Query used to delete a client, by setting its "available" boolean to 0,
which implies that the client will not be used anymore, and will only stay
in the databse for legal record*/