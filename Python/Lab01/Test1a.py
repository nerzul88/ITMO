#Исходный массив
a = [1, 20, 3, 10, 15]
#Создаём новый массив
b = []
#Выводим на печать исходный массив
print(a)
#Создаём цикл для прохода по всем элементам исходного массива
for i in a:
    #Первое условие
    if i < 10:
        #Изменяем элемент
        i *= 1.13
        #Добавляем элемент в новый массив
        b.append(i)
    #Второе условие
    elif i > 10:
        # Изменяем элемент
        i *= 0.18
        # Добавляем элемент в новый массив
        b.append(i)
    #Третье условие
    else:
        # Добавляем элемент в новый массив
        b.append(i)
#Выводим на печать новый массив
print(b)