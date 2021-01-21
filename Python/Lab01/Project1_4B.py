import pandas as pd

orderData = pd.read_csv("orderdata_sample.csv")
print(orderData)
total1 = orderData.eval('Total = Quantity * Price + Freight').round(2)
print("total1:\n", total1)
total = total1[['Quantity', 'Price', 'Freight', 'Total']].groupby('Total').mean()
print("total:\n", total)
total.to_csv('orderdata_total.csv')