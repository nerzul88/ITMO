a = [1, 20, 3, 10, 15]
b = []
print(a)
for i in a:
    if i < 10:
        i *= 1.13
        b.append(i)
    elif i > 10:
        i *= 0.18
        b.append(i)
    else:
        b.append(i)
print(b)