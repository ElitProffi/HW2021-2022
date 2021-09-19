#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{

	int a = 0;

	cin >> a;
	cout << "The next number for the number " << a << " is " << a + 1 << ".";
	cout << "The previous number for the number " << a << " is " << a - 1 << ".";

	return EXIT_SUCCESS;
}