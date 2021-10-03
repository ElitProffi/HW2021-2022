#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{

	int a = 0;
	int b = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		int j = 1;
		while (j * j <= i)
		{
			if (i == j * j)
			{
				cout << i << " ";
			}
			j = j + 1;
		}
	}

	return EXIT_SUCCESS;
}