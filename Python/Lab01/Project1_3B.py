import names, random, numpy as np

arr = [random.randint(1, 100) for i in range(1, 101)]
print("List: ", arr)

arrLow = [i for i in arr if i <= 50]
print("Low: ", arrLow)
arrHigh = [i for i in arr if i > 50]
print("High: ", arrHigh)

rows = 100
#id = np.array(range(1, 101))
#lastName = list(np.array([''.join(names.get_last_name()) for _ in range(rows)]))
firstName = list(np.array([''.join(names.get_first_name()) for _ in range(rows)]))
print('Firstnames:\n', firstName)
arrLet1 = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M']
arrLet2 = ['O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
arrFirstName1 = [i for i in firstName if i[0] in [j for j in arrLet1]]
arrFirstName1.sort()
arrFirstName2 = [i for i in firstName if i[0] in [j for j in arrLet2]]
arrFirstName2.sort()
print(arrFirstName2)