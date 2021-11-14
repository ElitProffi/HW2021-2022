#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "Russian");

	int n = 1;
	int k = 0;
	int* arr = new int[n] {0};
	int kom = 0;
	int x = 0;
	cout << "Список доступных команд:" << endl;
	cout << "0. Выход из программы." << endl;
	cout << "1. Вывод текущего состояния массива." << endl;
	cout << "2. Добавить элемент в конец массива." << endl;
	cout << "3. Добавить элемент в начало массива." << endl;
	cout << "4. Удалить элемент из конца массива." << endl;
	cout << "5. Удалить элемент из начала массива." << endl;
	cout << "6. Развернуть массив." << endl;
	cin >> kom;
	while (kom != 0)
	{
		switch (kom)
		{
		case 1:
			cout << "Массив:" << endl;
			if (k == 0)
			{
				cout << " " << endl;
			}
			else
			{
				for (int i = 0; i < k; ++i)
				{
					cout << arr[i] << " ";
				}
				cout << endl;
			}
			break;
		case 2:
			cout << "Введите добавляемый элемент" << endl;
			if (k >= n)
			{
				int* warr = new int[n];
				for (int i = 0; i < k; ++i)
				{
					warr[i] = arr[i];
				}
				delete[] arr;
				arr = new int[n * 2]{ 0 };
				for (int i = 0; i < k; ++i)
				{
					arr[i] = warr[i];
				}
				delete[] warr;
			}
			if (k >= n)
			{
				n = n * 2;
			}
			cin >> x;
			arr[k] = x;
			k += 1;
			break;
		case 3:
			cout << "Введите добавляемый элемент" << endl;
			if (k >= n)
			{
				int* warr = new int[n];
				for (int i = 0; i < k; ++i)
				{
					warr[i] = arr[i];
				}
				delete[] arr;
				arr = new int[n * 2]{ 0 };
				for (int i = 0; i < k; ++i)
				{
					arr[i + 1] = warr[i];
				}
				delete[] warr;
				n = n * 2;
			}
			cin >> x;
			arr[0] = x;
			k += 1;
			break;
		case 4:
			arr[k - 1] = 0;
			k -= 1;
			cout << "Элемент удалён" << endl;
			break;
		case 5:
			for (int i = 0; i < k - 1; ++i)
			{
				arr[i] = arr[i + 1];
			}
			arr[k - 1] = 0;
			k -= 1;
			cout << "Элемент удалён" << endl;
			break;
		case 6:
			int b = 0;
			for (int i = 0; i < k / 2; ++i)
			{
				b = arr[i];
				arr[i] = arr[k - i - 1];
				arr[k - i - 1] = b;
			}
			cout << "Массив зазвёрнут" << endl;
			break;
		}
		cin >> kom;
	}
	delete[] arr;

	return EXIT_SUCCESS;
}