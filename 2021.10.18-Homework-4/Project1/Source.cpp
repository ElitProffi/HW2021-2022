#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;
	int p = 1;
	int min = 0;
	int max = 0;
	int max2 = 0;
	int k = 0;
	cin >> n;
	int a[100]{ 0 };
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cout << "ARRAY : ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "EVEN : ";
	for (int i = 1; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
	{
		s += a[i];
	}
	cout << "SUM : " << s << endl;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < 0)
		{
			k += 1;
			p = p * a[i];
		}
	}
	if (k != 0)
	{
		cout << "PRODUCT OF NEGATIVE : " << p << endl;
	}
	else
	{
		cout << "PRODUCT OF NEGATIVE : " << k << endl;
	}
	min = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == min)
		{
			cout << "FIRST MIN INDEX : " << i << endl;
			break;
		}
	}
	max = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	max2 = min;
	for (int i = 0; i < n; ++i)
	{
		if ((a[i] > max2) && (a[i] < max))
		{
			max2 = a[i];
		}
	}
	cout << "SECOND MAX : " << max2 << endl;
	cout << "REVERSE : ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[n - i - 1] << " ";
	}
	cout << endl;
	cout << "ODD INDEXES : ";
	for (int i = 1; i < n; i += 2)
	{
		cout << a[i] << " ";
	}


	return EXIT_SUCCESS;
}