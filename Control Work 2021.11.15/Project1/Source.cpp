#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{
	int k = 0;
	cin >> k;
	int* n = new int[k] {0};
	int* m = new int[k] {0};
	for (int i = 0; i < k; ++i)
	{
		cin >> n[i] >> m[i];
	}
	for (int i = 0; i < k; ++i)
	{
		cout << 19 * m[i] + (((n[i] + 239) * (n[i] + 366)) / 2) << endl;
	}
	delete[] n;
	delete[] m;

	return EXIT_SUCCESS;
}