#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{

	int n = 0;
	int f = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		f = f * i;
	}
	cout << f;

	return EXIT_SUCCESS;
}