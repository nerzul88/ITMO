//#include <iostream>
//#include <math.h>
//#include <Windows.h>
//
//using namespace std;
//
//void show_array(const int, const int);
//bool from_min(const int, const int);
//bool from_max(const int, const int);
//void bubble_sort(int, const int, bool);
//
//void show_array(const int Arr[], const int N) {
//	for (int i = 0; i < N; i++) {
//		cout << Arr[i] << " ";		
//	}
//	cout << "\n";
//}
//
//bool from_min(const int a, const int b) {
//	return a > b;
//}
//
//bool from_max(const int a, const int b) {
//	return a < b;
//}
//
//void bubble_sort(int Arr[], const int N, bool (*compare)(int a, int b)) {
//	for (int i = 1; i < N; i++) {
//		for (int j = 0; j < N - 1; j++) {
//			if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j+1]);
//		}
//	}
//}
//
//int main() {
//	SetConsoleOutputCP(1251);
//	SetConsoleCP(1251);
//
//	bool (*from_f[2])(int, int) = { from_min, from_max };
//	const int N = 10;
//	int my_choose = 0;
//	int A[N] = { 9, 8, 7, 6, 1, 2, 3, 5, 4, 9 };
//	cout << "�������� ������: \n";
//	show_array(A, N);
//	cout << "������� 1, ����� ����������� ������ �� �����������\n";
//	cout << "������� 2, ����� ����������� ������ �� ��������\n";
//	cin >> my_choose;	
//
//	/*switch (my_choose) {
//	case 1: 
//		bubble_sort(A, N, from_min);		
//		break;
//	case 2: 
//		bubble_sort(A, N, from_max);		
//		break;
//	default:
//		cout << "\r����������� �������� ";
//	}*/
//
//	bubble_sort(A, N, (from_f[my_choose - 1]));
//
//	show_array(A, N);
//	
//	return 0;
//}