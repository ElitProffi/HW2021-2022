#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "Russian");

	int n = 0;
	int a = 0;
	cin >> n;
	if (n == 0)
	{
		cout << "ноль ";
	}
	if (n > 100)
	{
		a = n / 100;
		switch (a)
		{
		case 1:
			cout << "сто";
			break;
		case 2:
			cout << "двести";
			break;
		case 3:
			cout << "триста";
			break;
		case 4:
			cout << "четыреста";
			break;
		case 5:
			cout << "пятьсот";
			break;
		case 6:
			cout << "шестьсот";
			break;
		case 7:
			cout << "семьсот";
			break;
		case 8:
			cout << "восемьсот";
			break;
		case 9:
			cout << "девятьсот";
			break;
		}
		cout << " ";
	}
	n = n % 100;
	if ((n > 19) || (n < 10))
	{
		a = n / 10;
		switch (a)
		{
		case 2:
			cout << "двадцать";
			break;
		case 3:
			cout << "тридцать";
			break;
		case 4:
			cout << "сорок";
			break;
		case 5:
			cout << "пятьдесят";
			break;
		case 6:
			cout << "шестьдесят";
			break;
		case 7:
			cout << "семьдесят";
			break;
		case 8:
			cout << "восемьдесят";
			break;
		case 9:
			cout << "девяносто";
			break;
		}
		if (a != 0)
		{
			cout << " ";
		}
		a = n % 10;
		switch (a)
		{
		case 0:
			cout << "бананов" << endl;
			break;
		case 1:
			cout << "один банан" << endl;
			break;
		case 2:
			cout << "два банана" << endl;
			break;
		case 3:
			cout << "три банана" << endl;
			break;
		case 4:
			cout << "четыре банана" << endl;
			break;
		case 5:
			cout << "пять бананов" << endl;
			break;
		case 6:
			cout << "шесть бананов" << endl;
			break;
		case 7:
			cout << "семь бананов" << endl;
			break;
		case 8:
			cout << "восемь бананов" << endl;
			break;
		case 9:
			cout << "девять бананов" << endl;
			break;
		}
	}
	else
	{
		switch (n)
		{
		case 10:
			cout << "десять бананов" << endl;
			break;
		case 11:
			cout << "одиннадцать бананов" << endl;
			break;
		case 12:
			cout << "двенадцать бананов" << endl;
			break;
		case 13:
			cout << "тринадцать бананов" << endl;
			break;
		case 14:
			cout << "четырнадцать бананов" << endl;
			break;
		case 15:
			cout << "пятнадцать бананов" << endl;
			break;
		case 16:
			cout << "шестнадцать бананов" << endl;
			break;
		case 17:
			cout << "семнадцать бананов" << endl;
			break;
		case 18:
			cout << "восемнадцать бананов" << endl;
			break;
		case 19:
			cout << "девятнадцать бананов" << endl;
			break;

		}

	}

	return EXIT_SUCCESS;
}