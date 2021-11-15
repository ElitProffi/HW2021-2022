#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{
	int b = 0;
	int n = 0;
	int m = 0;
	int x = 0;
	int k = 0;
	int p = -1;
	cin >> n >> m;
	int* arr1 = new int[n] {0};
	int* arr2 = new int[m] {100001};
	for (int i = 0; i < n; ++i)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> x;
		int g = 0;
		while ((g < n) && (arr1[g] != x))
		{
			g += 1;
		}
		if (arr1[g] == x)
		{
			arr2[k] = x;
			k += 1;
		}
	}
	for (int i = 0; i < k; ++i)
	{
		for (int g = 0; g < k - 1; ++g)
		{
			if (arr2[g] > arr2[g + 1])
			{
				b = arr2[g];
				arr2[g] = arr2[g + 1];
				arr2[g + 1] = b;
			}
		}
	}
	for (int i = 0; i < k; ++i)
	{
		if (arr2[i] > p)
		{
			cout << arr2[i] << " ";
			p = arr2[i];
		}
	}

	delete[] arr1;
	delete[] arr2;

	return EXIT_SUCCESS;
}