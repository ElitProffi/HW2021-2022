#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{
	int s = 0;
	int k = 100;
	int* n = new int[k] { 0 };
	for (int i = 0; i < 100; ++i)
	{
		cin >> n[i];
	}
	for (int i = 0; i < 100; ++i)
	{
		s += n[i];
	}
	cout << s / 100;

	delete[] n;

	return EXIT_SUCCESS;
}