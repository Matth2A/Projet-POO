/*------------------------------------------------------------
*        Script SQLSERVER 
------------------------------------------------------------*/


/*------------------------------------------------------------
-- Table: cities
------------------------------------------------------------*/
CREATE TABLE cities(
	id_city    INT IDENTITY (1,1) NOT NULL ,
	name       VARCHAR (50) NOT NULL ,
	postcode   INT  NOT NULL  ,
	CONSTRAINT cities_PK PRIMARY KEY (id_city)
);


/*------------------------------------------------------------
-- Table: address
------------------------------------------------------------*/
CREATE TABLE address(
	id_adr            INT IDENTITY (1,1) NOT NULL ,
	number            VARCHAR (10) NOT NULL ,
	street            TEXT  NOT NULL ,
	additional_info   TEXT  NOT NULL ,
	id_city           INT  NOT NULL  ,
	CONSTRAINT address_PK PRIMARY KEY (id_adr)

	,CONSTRAINT address_cities_FK FOREIGN KEY (id_city) REFERENCES cities(id_city)
);


/*------------------------------------------------------------
-- Table: person
------------------------------------------------------------*/
CREATE TABLE person(
	id_p         INT IDENTITY (1,1) NOT NULL ,
	first_name   VARCHAR (50) NOT NULL ,
	last_name    VARCHAR (50) NOT NULL ,
	birth_date   DATE NOT NULL ,
	id_adr       INT  NOT NULL  ,
	CONSTRAINT person_PK PRIMARY KEY (id_p)

	,CONSTRAINT person_address_FK FOREIGN KEY (id_adr) REFERENCES address(id_adr)
);


/*------------------------------------------------------------
-- Table: clients
------------------------------------------------------------*/
CREATE TABLE clients(
	id_client   INT IDENTITY (1,1) NOT NULL ,
	id_p        INT  NOT NULL  ,
	CONSTRAINT clients_PK PRIMARY KEY (id_client)

	,CONSTRAINT clients_person_FK FOREIGN KEY (id_p) REFERENCES person(id_p)
	,CONSTRAINT clients_person_AK UNIQUE (id_p)
);


/*------------------------------------------------------------
-- Table: orders
------------------------------------------------------------*/
CREATE TABLE orders(
	id_order                 INT IDENTITY (1,1) NOT NULL ,
	order_issue_date         DATE NOT NULL ,
	expected_delivery_date   DATE NOT NULL ,
	discount                 FLOAT  NOT NULL ,
	id_client                INT  NOT NULL ,
	id_adr                   INT  NOT NULL ,
	id_adr_address           INT  NOT NULL  ,
	CONSTRAINT orders_PK PRIMARY KEY (id_order)

	,CONSTRAINT orders_clients_FK FOREIGN KEY (id_client) REFERENCES clients(id_client)
	,CONSTRAINT orders_address0_FK FOREIGN KEY (id_adr) REFERENCES address(id_adr)
	,CONSTRAINT orders_address1_FK FOREIGN KEY (id_adr_address) REFERENCES address(id_adr)
);


/*------------------------------------------------------------
-- Table: items
------------------------------------------------------------*/
CREATE TABLE items(
	id_item              INT IDENTITY (1,1) NOT NULL ,
	reference            VARCHAR (50) NOT NULL ,
	name                 TEXT  NOT NULL ,
	available_quantity   FLOAT  NOT NULL ,
	restock_threshold    FLOAT  NOT NULL ,
	taxless_price        FLOAT  NOT NULL ,
	tax                  FLOAT  NOT NULL  ,
	CONSTRAINT items_PK PRIMARY KEY (id_item)
);


/*------------------------------------------------------------
-- Table: payment_methods
------------------------------------------------------------*/
CREATE TABLE payment_methods(
	id_method   INT IDENTITY (1,1) NOT NULL ,
	name        VARCHAR (50) NOT NULL  ,
	CONSTRAINT payment_methods_PK PRIMARY KEY (id_method)
);


/*------------------------------------------------------------
-- Table: has_item
------------------------------------------------------------*/
CREATE TABLE has_item(
	id_item         INT  NOT NULL ,
	id_order        INT  NOT NULL ,
	quantity        FLOAT  NOT NULL ,
	taxless_price   FLOAT  NOT NULL ,
	tax             FLOAT  NOT NULL  ,
	CONSTRAINT has_item_PK PRIMARY KEY (id_item,id_order)

	,CONSTRAINT has_item_items_FK FOREIGN KEY (id_item) REFERENCES items(id_item)
	,CONSTRAINT has_item_orders0_FK FOREIGN KEY (id_order) REFERENCES orders(id_order)
);


/*------------------------------------------------------------
-- Table: payment_milestones
------------------------------------------------------------*/
CREATE TABLE payment_milestones(
	id_order    INT  NOT NULL ,
	id_method   INT  NOT NULL ,
	amount      FLOAT  NOT NULL ,
	date        DATE NOT NULL  ,
	CONSTRAINT payment_milestones_PK PRIMARY KEY (id_order,id_method)

	,CONSTRAINT payment_milestones_orders_FK FOREIGN KEY (id_order) REFERENCES orders(id_order)
	,CONSTRAINT payment_milestones_payment_methods0_FK FOREIGN KEY (id_method) REFERENCES payment_methods(id_method)
);


/*------------------------------------------------------------
-- Table: employees
------------------------------------------------------------*/
CREATE TABLE employees(
	id_emp             INT IDENTITY (1,1) NOT NULL ,
	hire_date          DATE NOT NULL ,
	id_p               INT  NOT NULL ,
	id_emp_employees   INT  NOT NULL  ,
	CONSTRAINT employees_PK PRIMARY KEY (id_emp)

	,CONSTRAINT employees_person_FK FOREIGN KEY (id_p) REFERENCES person(id_p)
	,CONSTRAINT employees_employees0_FK FOREIGN KEY (id_emp_employees) REFERENCES employees(id_emp)
	,CONSTRAINT employees_person_AK UNIQUE (id_p)
);



