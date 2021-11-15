#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{
	int n = 0;
	cin >> n;
	int* o = new int[n] {0};
	for (int i = 0; i < n; ++i)
	{
		cin >> o[i];
	}
	int max = o[0];
	int min = o[0];
	for (int i = 0; i < n; ++i)
	{
		if (o[i] < min)
		{
			min = o[i];
		}
		if (o[i] > max)
		{
			max = o[i];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (o[i] == max)
		{
			o[i] = min;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << o[i] << " ";
	}
	delete[] o;

	return EXIT_SUCCESS;
}