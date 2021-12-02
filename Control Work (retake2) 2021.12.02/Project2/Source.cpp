#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{
	int* n = new int[20]{ 0 };
	for (int i = 0; i < 20; ++i)
	{
		cin >> n[i];
	}
	for (int i = 0; i < 20; ++i)
	{
		cout << n[20 - i - 1] << " ";
	}

	delete[] n;

	return EXIT_SUCCESS;
}