#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	int an = 0;
	int bn = 0;
	an = a;
	bn = b;
	while (an != bn)
	{
		if (an > bn)
		{
			an = an - bn;
		}
		else
		{
			bn = bn - an;
		}
	}
	cout << (a * b) / bn;

	return EXIT_SUCCESS;
}