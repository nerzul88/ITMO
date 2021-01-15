productName = ["apple", "orange", "pineapple", "peach", "watermelon", "cherry", "apricot", "lime", "pear", "raspberry"]
cost = [5.0, 7.0, 9.0, 8.0, 7.0, 10.0, 8.0, 7.5, 8.5, 12.5]
employeeCode = [123, 456, 789, 234, 567, 890, 987, 654, 321, 666]
productUnit = list(zip(productName, cost))
commonList = dict(zip(employeeCode, productUnit))
print (commonList)