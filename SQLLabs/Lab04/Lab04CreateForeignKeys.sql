USE OrdersDatabase;
GO
ALTER TABLE Orders
ADD CONSTRAINT FK_Orders_Customers FOREIGN KEY (CustomerID)
REFERENCES Customers (CustomerID);
GO
INSERT INTO Orders
VALUES (105,2, GETDATE());
GO
INSERT INTO Orders
VALUES (106,5, GETDATE());
GO
ALTER TABLE CustomerDetails
ADD CONSTRAINT FK_CustomerDetails_Customers FOREIGN KEY (CustomerID)
REFERENCES Customers (CustomerID);
GO
INSERT INTO CustomerDetails
VALUES (5,'9832 Mt. Dias Blv.', 'Chicago','97321', '08/09/1970');
GO
ALTER TABLE LineItems
ADD CONSTRAINT FK_LineItems_Orders FOREIGN KEY (OrderID)
REFERENCES Orders (OrderID);
GO
INSERT INTO LineItems
VALUES (101,33,30.00,1);
GO
INSERT INTO LineItems
VALUES (106,44,30.00,1);
GO
ALTER TABLE LineItems
ADD CONSTRAINT FK_LineItems_Products FOREIGN KEY (ProductID)
REFERENCES Products (ProductID);
GO
INSERT INTO LineItems
VALUES (102,22,15.00,1);
GO
INSERT INTO LineItems
VALUES (104,66,30.00,1);
GO