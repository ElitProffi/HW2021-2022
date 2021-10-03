#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{

	int n = 0;
	int i = 1;
	int j = 1;
	int k = 1;
	cin >> n;
	while (i <= n)
	{
		if (k < j)
		{
			cout << i << " ";
			k = k + 1;
		}
		else
		{
			cout << i << endl;
			k = 1;
			j = j + 1;
		}
		i = i + 1;
	}

	return EXIT_SUCCESS;
}