import pandas as pd
import sys
from tabulate import tabulate
import datetime

print("Добро пожаловать в программу учёта денежных средств\n")

def menu():
    print("Выберите действие:\n")
    print("\t1 - Добавить операцию")
    print("\t2 - Показать всё")
    print("\t3 - Сортировать по дате")
    print("\t4 - Сортировать по категории")
    print("\t5 - Сортировать \"дешевле-дороже\"")
    print("\t6 - Сортировать \"дороже-дешевле\"")
    print("\t7 - Удалить операцию")
    print("\t0 - Выход\n")
    while True:
        try:
            x = int(input("Что будем делать? "))
            if x == 0:
                print("До свидания!")
                sys.exit(x)
            if x < 0 or x > 7:
                raise Exception
            return x
        except Exception:
            print("Вы ввели что-то не то. Попробуйте ещё раз.")

# Реализация меню в зависимости от выбора пользователя
def select(x):
    try:
        if x == 1:
            addTransaction()
        elif x == 2:
            showResults(readData())
        elif x == 3:
            sortByDate()
        elif x == 4:
            sortByCategory()
        elif x == 5:
            sortDecrease()
        elif x == 6:
            sortIncrease()
        elif x == 7:
            deleteTransaction()
        select(menu())
    except Exception:
        print("Ошибка! Что-то пошло не так...")
# Добавление транзакции
def addTransaction():
    category = str(input("Введите категорию: "))
    product = str(input("Введите название: "))
    while True:
        try:
            cost = int(input("Введите цену: "))
            if cost <= 0:
                raise Exception
            break
        except Exception:
            print("Вы ввели недопустимое значение\n")

    date = datetime.datetime.now().replace(microsecond=0)
    #dataBase = readData().append(pd.DataFrame([[category, product, cost, date]], columns=["Category", "Product", "Cost", "Date"], ignore_index=True))
    dataBase = readData().append({'Category': category, 'Product': product, 'Cost': cost, 'Date': date}, ignore_index=True)

    saveData(dataBase)
# Чтение данных из csv-файла
def readData():
    dataBase = pd.read_csv('dataBase_test.csv')
    return dataBase
# Сохранение данных в csv-файл
def saveData(dataBase):
    while True:
        try:
            saveResult = input("Сохранить изменения? (y/n) ")
            if saveResult == "y":
                dataBase.to_csv('dataBase_test.csv', index=False)
                print("Данные успешно сохранены")
                break
            if saveResult == "n":
                break
            else:
                raise Exception
        except Exception:
            print("Вы ввели недопустимое значение\n")
# Отображение данных
def showResults(results):
    print(tabulate(results, headers='keys', tablefmt='psql'))
# Сортровка по дате
def sortByDate():
    sortedByDate = readData().sort_values('Date')
    showResults(sortedByDate)
# Сортровка по категории
def sortByCategory():
    sortedByCategory = readData().sort_values('Category')
    showResults(sortedByCategory)
# Сортровка по убыванию стоимости
def sortDecrease():
    sortedDecrease = readData().sort_values(by=['Cost'], ascending=False)
    showResults(sortedDecrease)
# Сортировка по возрастанию стоимости
def sortIncrease():
    sortedByCategory = readData().sort_values('Cost')
    showResults(sortedByCategory)
# Удаление транзакции по номеру индекса
def deleteTransaction():
    while True:
        try:
            showResults(readData())
            dataBase = readData()
            indexForDrop = int(input("Введите индекс строки для удаления: "))
            if indexForDrop < 0:
                raise Exception
            dataBase = dataBase.drop([indexForDrop])
            print("Строка с индексом {0} была успешно удалена".format(indexForDrop))
            saveData(dataBase)
            select(menu())
        except Exception:
            print("Вы ввели что-то не то. Попробуйте ещё раз.")

select(menu())



# dataBase = readData()
# dataBaseBlank = pd.DataFrame(columns=["Category", "Product", "Cost", "Date"])
# dataBase = dataBase.append({'Category':'Продукты', 'Product':'Курица', 'Cost':'35', 'Date':'2021-01-30'}, ignore_index=True)
# dataBase.loc[dataBase.index + 1] = ['Продукты', 'Мясо', '55', '2021-01-30']
# showResults(dataBase)
# saveData(dataBaseBlank)



#saveData(dataBaseBlank)
#showResults(addTransaction(dataBaseBlank))

#, index=np.arange(0)
# print(dataBase)
# print(dataBase.dtypes)
# print(dataBase.columns)
# category = str(input("Введите категорию: "))
# product = str(input("Введите название: "))
# cost = int(input("Введите цену: "))
# date = datetime.datetime.now().replace(microsecond=0)
# #dataBase.loc = [category, product, cost, date]
# dataBase = dataBase.append(pd.DataFrame([[category, product, cost, date]], columns=["Category", "Product", "Cost", "Date"]))
# print(dataBase)
# print(showResults(dataBase))
