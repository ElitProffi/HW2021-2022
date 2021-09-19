#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{

	int a1 = 0;
	int b1 = 0;
	int c1 = 0;
	int a2 = 0;
	int b2 = 0;
	int c2 = 0;

	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

	cout << (a2 - a1) * 3600 + (b2 - b1) * 60 + c2 -c1 << endl;

	return EXIT_SUCCESS;
}