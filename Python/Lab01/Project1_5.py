from numpy.distutils.fcompiler import none

# 1. Дан список температурных изменений в течение дня (целые числа).
# Известно, что измеряющее устройство иногда сбоит и записывает отсутствие температуры (значение None).
# Выведите среднюю температуру за наблюдаемый промежуток времени,
# предварительно очистив список от неопределенных значений.
# Гарантируется, что хотя бы одно определенное значение в списке есть.

temperature = [-2, -1, -1, none, -1, 0, none, 1, 1, none, 2, 2]
cleanTemperature = list(filter(lambda x: x is not none, temperature))
print(cleanTemperature)
average = round(sum(cleanTemperature) / len(cleanTemperature), 2)
print(average)

# 2. Напишите функцию, которая принимает неограниченное количество числовых аргументов
# и возвращает кортеж из двух списков: отрицательных значений (отсортирован по убыванию);
# неотрицательных значений (отсортирован по возрастанию).

def numbers(*args):
    numbers1 = sorted(filter(lambda x: x < 0, args), reverse=True)
    numbers2 = sorted(filter(lambda x: x >= 0, args))
    return numbers1, numbers2
arr1 = [int(i) for i in input("Введите числа: ").split()]
print(numbers(*arr1))

# 3. Составьте две функции для возведения числа в степень:
# один из вариантов реализуйте в рекурсивном стиле.

def exp1(a, n):
    return a**n
def exp2(a, n):
    if n == 1:
        return a
    if n != 1:
        return a * exp2(a, n -1)
a = int(input("Введите число: "))
n = int(input("Введите степень, в которую будем возводить чило: "))
print("Обычная функция: ", exp1(a, n))
print("Рекурсивная функция: ", exp2(a, n))
