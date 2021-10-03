#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{

	int n = 0;
	int k = 1;
	int f1 = 1;
	int f2 = 1;
	int f3 = 1;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		f1 = f1 * i;
	}
	for (int i = 1; i <= k; i++)
	{
		f2 = f2 * i;
	}
	for (int i = 1; i <= n - k; i++)
	{
		f3 = f3 * i;
	}
	cout << f1 / f2 / f3;

	return EXIT_SUCCESS;
}