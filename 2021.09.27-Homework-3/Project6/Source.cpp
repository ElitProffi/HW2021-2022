#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{

	int n = 0;
	int f = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> f;
		if (f == 0)
		{
			a = a + 1;
		}
		else if (f > 0)
		{
			b = b + 1;
		}
		else
		{
			c = c + 1;
		}

	}
	cout << a << " " << b << " " << c;

	return EXIT_SUCCESS;
}