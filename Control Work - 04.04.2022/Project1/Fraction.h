#pragma once
#include <iostream>
#include <cmath>

struct Fraction
{
private:
	long long a;
	long long b;
public:
	Fraction(long long a = 0, long long b = 0);

	Fraction(const Fraction& complex);

	~Fraction();


	long long getA();
	void setA(long long a);
	long long getB();
	void setB(long long b);
	void set(long  long a, long long b);

	friend  std::ostream& operator<<(std::ostream& stream, const Fraction& fraction);

	Fraction& operator=(const Fraction& fraction);

	Fraction operator-(const Fraction& fraction);
	friend Fraction operator-(const long long k, const Fraction& fraction);

	Fraction operator+(const Fraction& fraction);
	friend Fraction operator+(const long long k, const Fraction& fraction);

	Fraction operator*(const Fraction& fraction);
	friend Fraction operator*(const long long mult, const Fraction& fraction);
	friend Fraction operator*(const Fraction& fraction, const long long mult);

	Fraction operator/(const Fraction& fraction);
	friend Fraction operator/(const long long k, const Fraction& fraction);
	friend Fraction operator/(Fraction& fraction, const long long k);

	Fraction abs();
	Fraction reverse();
	Fraction power(long long a);

	bool operator==(const Fraction& fraction);
	friend bool operator==(const long long k, const Fraction& fraction);
	friend bool operator==(Fraction& fraction, const long long k);

	bool operator>(const Fraction& fraction);
	friend bool operator>(const long long k, const Fraction& fraction);
	friend bool operator>(Fraction& fraction, const long long k);

	bool operator<(const Fraction& fraction);
	friend bool operator<(const long long k, const Fraction& fraction);
	friend bool operator<(Fraction& fraction, const long long k);

	bool operator<=(const Fraction& fraction);
	friend bool operator<=(const long long k, const Fraction& fraction);
	friend bool operator<=(Fraction& fraction, const long long k);

	bool operator>=(const Fraction& fraction);
	friend bool operator>=(const long long k, const Fraction& fraction);
	friend bool operator>=(Fraction& fraction, const long long k);
};