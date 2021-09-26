#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{

	int k = 0;
	int m = 0;
	int n = 0;
	cin >> n >> m >> k;
	if (n * m < k)
	{
		cout << "NO";
	}
	else if ((k % m == 0) || (k % n == 0))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return EXIT_SUCCESS;
}