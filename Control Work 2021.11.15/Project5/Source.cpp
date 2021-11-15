#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{
	int b = 0;
	int n = 0;
	int m = 0;
	int p = -1;
	int pn = 0;
	cin >> n >> m;
	int* arr1 = new int[n] {0};
	int* arr2 = new int[m] {0};
	for (int i = 0; i < n; ++i)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> arr2[i];
	}
	for (int i = 0; i < n - 1; ++i)
	{
		for (int g = 0; g < n - i - 1; ++g)
		{
			if (arr1[g] == arr1[g + 1])
			{
				arr1[g] = -1;
			}
			if (arr1[g] > arr1[g + 1])
			{
				b = arr1[g];
				arr1[g] = arr1[g + 1];
				arr1[g + 1] = b;
			}
		}
	}
	for (int i = 0; i < m - 1; ++i)
	{
		for (int g = 0; g < m - i - 1; ++g)
		{
			if (arr2[g] == arr2[g + 1])
			{
				arr2[g] = -1;
			}
			if (arr2[g] > arr2[g + 1])
			{
				b = arr2[g];
				arr2[g] = arr2[g + 1];
				arr2[g + 1] = b;
			}
		}
	}
	if (n < m)
	{
		for (int i = 0; i < n; ++i)
		{
			if ((p != arr1[i]) && (arr1[i] != -1))
			{
				int g = pn;
				while (((arr1[i] > arr2[g]) || (arr2[g] == -1)) && (g < m))
				{
					g += 1;
				}
				if (arr1[i] == arr2[g])
				{
					cout << arr1[i] << " ";
					p = arr1[i];
				}
				pn = g;
			}
		}

	}
	else
	{
		for (int i = 0; i < m; ++i)
		{
			if ((p != arr2[i]) && (arr2[i] != -1))
			{
				int g = pn;
				while (((arr2[i] > arr1[g]) || (arr1[g] == -1)) && (g < n))
				{
					g += 1;
				}
				if (arr2[i] == arr1[g])
				{
					cout << arr1[g] << " ";
					p = arr2[i];
				}
				pn = g;
			}
		}
	}

	delete[] arr1;
	delete[] arr2;

	return EXIT_SUCCESS;
}