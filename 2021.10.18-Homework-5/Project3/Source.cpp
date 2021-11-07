#include<iostream>

using namespace std;

int main(int argc, char* argv[])

{

	double a = 0;
	cin >> a;
	long long value = *((long long*)&a);
	long long one = 1;
	long long absa = ~(~value | (one << sizeof(double) * 8 - 1));
	double absaa = *((double*)&absa);
	cout << absaa << endl;

	return EXIT_SUCCESS;
}