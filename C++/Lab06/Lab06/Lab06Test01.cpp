//#include <iostream>
//#include <string>
//#include <Windows.h>
//#include <fstream>
//
//
//using namespace std;
//
////Запись текста в файл
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//		
//	const int MAX = 255; 
//	char s[MAX]; 
//		
//	cout << "Введите текст для записи в файл: " << endl;
//	cin.get(s, MAX, '$');
//	//getline(cin, s);
//	ofstream out("Lab06Test01.txt", ios::out | ios::binary);
//	if (!out) {
//		cout << "Файл открыть невозможно\n";
//		return 1;
//	}
//	
//	out << s;
//	out.close();
//	
//	return 0;
//}