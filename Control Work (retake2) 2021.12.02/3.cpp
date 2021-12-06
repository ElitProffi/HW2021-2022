#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{
	int x = 0;
	int y = 0;
	cin >> x >> y;
	for (int i = 1; i <= 8; ++i)
	{
		for (int g = 1; g <= 8; ++g)
		{
			if ((8 - i + 1 == y) && (g == x))
			{
				cout << 0 << " ";
			}
			else if (((8 - i + 1 - y) == (g - x)) || ((8 - i + 1 - y) == -(g - x)))
			{
				cout << 1 << " ";
			}
			else
			{
				cout << 2 << " ";
			}
		}
		cout << endl;
	}

	return EXIT_SUCCESS;
}