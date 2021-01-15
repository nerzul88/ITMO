import numpy as np
list1 = [10, 12, 14, 16, 18, 11, 13, 15, 17, 19]
list2 = np.array([10, 12, 14, 16, 18, 11, 13, 15, 17, 19])
list1.append(9)
list1.append(10)
list2 = np.append(list2, [9, 10])
print("List 1:", list1)
print("List 2:", list2)
list1.sort(reverse=True)
list2 = -np.sort(-list2)
print("Sorted descending List 1:", list1)
print("Sorted descending List 2:", list2)
print("Multiplied by 2 List1:", list1 * 2)
print("Multiplied by 2 List2:", list2 * 2)
print("First three elements of List 1", list1[:3])
print("First three elements of List 2", list1[:3])
print("Attributes of List1:", dir(list1))
print("Attributes of List2:", dir(list2))

