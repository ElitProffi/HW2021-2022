#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{
	int a = 0;
	int b = 0;
	int c = 0;
	int s = 0;
	cin >> a >> b >> c;
	if ((a + b <= c) || (a + c <= b) || (b + c <= a) || (a <= 0) || (b <= 0) || (c <= 0))
	{
		cout << "impossible";
	}
	else
	{
		if (a > c)
		{
			s = a;
			a = c;
			c = s;
		}
		if (b > c)
		{
			s = b;
			b = c;
			c = s;
		}
		if ((c * c) == ((b * b) + (a * a)))
		{
			cout << "right";
		}
		else if ((c * c) < ((b * b) + (a * a)))
		{
			cout << "acute";
		}
		else
		{
			cout << "obtuse";
		}
	}


	return EXIT_SUCCESS;
}