#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char* argv[])

{
	double m = 0;
	double r = 0;
	double h = 0;
	cin >> h >> m >> r;
	cout << sqrt((2 * h * r * r * 100000000000) / (6.67 * m));

	return EXIT_SUCCESS;
}