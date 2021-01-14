string1 = input("Please enter a string value: ")
string2 = input("Please enter a string value: ")
integer1 = int(input("Please enter an integer value: "))
integer2 = int(input("Please enter an integer value: "))
firstName = input("Please enter your name: ")
lastName = input("Please enter your last name: ")
dict1 = {'FirstName': firstName, 'LastName': lastName}

print(string1 + " " + string2)
print("\n", "The length of", string1, "is", len(string1), "\n", "The length of", string2, "is", len(string2))
print("The sum of", integer1, "and", integer2, "is:", integer1 + integer2)
print("\n", "Type of", string1, "is", type(string1),
      "\n", "Type of", string2, "is", type(string2),
      "\n", "Type of", integer1, "is", type(integer1),
      "\n", "Type of", integer2, "is", type(integer2))
print("Is", integer1, "greater than", integer2, "?", integer1 > integer2)
#print(dict1['FirstName'], dict1['LastName'])
print(dict1.values())
print(dict1.keys())