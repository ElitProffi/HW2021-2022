#include "Fraction.h"

using namespace std;

Fraction::Fraction()
{
	a = 1;
	b = 1;
}

Fraction::Fraction(long long a, long long b) : a(a), b(b) {}

Fraction::Fraction(const Fraction& fraction) : a(fraction.a), b(fraction.b) {}

Fraction::~Fraction()
{
	this->a = 0;
	this->b = 0;
}

long long Fraction::getA()
{
	return this->a;
}

void Fraction::setA(long long a)
{
	this->a = a;
}

long long Fraction::getB()
{
	return this->b;
}

void Fraction::setB(long long b)
{
	this->b = b;
}

void Fraction::set(long long a, long long b)
{
	this->a = a;
	this->b = b;
}


std::ostream& operator<<(std::ostream& stream, const Fraction& fraction)
{
	if (fraction.a * fraction.b < 0)
	{
		cout << "-";
	}
	long long c1 = abs(fraction.a);
	long long c2 = abs(fraction.b);
	while (c1 != c2)
	{
		if (c1 > c2)
		{
			c1 = c1 - c2;
		}
		else
		{
			c2 = c2 - c1;
		}
	}

	stream << abs(fraction.a / c1) << "/" << abs(fraction.b / c1);
	return stream;
}

Fraction& Fraction::operator=(const Fraction& fraction)
{
	this->a = fraction.a;
	this->b = fraction.b;

	return *this;
}

Fraction Fraction::operator-(const Fraction& fraction)
{
	return Fraction(this->a * fraction.b - fraction.a * this->b, this->b * fraction.b);
}

Fraction operator-(const long long k, const Fraction& fraction)
{
	return Fraction(k * fraction.b - fraction.a, fraction.b);
}

Fraction Fraction::operator+(const Fraction& fraction)
{
	return Fraction(this->a * fraction.b + fraction.a * this->b, this->b * fraction.b);
}

Fraction operator+(const long long k, const Fraction& fraction)
{
	return Fraction(fraction.a + k * fraction.b , fraction.b);
}

Fraction Fraction::operator*(const Fraction& fraction)
{
	return Fraction(this->a * fraction.a, this->b * fraction.b);
}

Fraction operator*(const long long mult, const Fraction& fraction)
{
	return Fraction(mult * fraction.a, fraction.b);
}

Fraction operator*(const Fraction& fraction, const long long mult)
{
	return Fraction(mult * fraction.a, fraction.b);
}

Fraction Fraction::operator/(const Fraction& fraction)
{
	return Fraction(this->a * fraction.b, this->b * fraction.a);
}

Fraction operator/(const long long k, const Fraction& fraction)
{
	Fraction c = Fraction(k, 1);
	return (c / fraction);
}

Fraction operator/(Fraction& fraction, const long long k)
{
	Fraction c = Fraction(k, 1);
	return (fraction / c);
}

Fraction Fraction::abs()
{
	if ((this-> a > 0) and (this-> b > 0))
	{
		return Fraction(this-> a, this-> b);
	}
	if ((this-> a < 0) and (this->b > 0))
	{
		return Fraction(this->a * (-1), this->b);
	}
	if ((this->a > 0) and (this->b < 0))
	{
		return Fraction(this->a, this->b * (-1));
	}
	if ((this->a < 0) and (this->b < 0))
	{
		return Fraction(this->a * (-1), this->b * (-1));
	}
}

Fraction Fraction::reverse()
{
	return Fraction(this->b, this->a);
}

Fraction Fraction::power(long long s)
{
	long long c1 = 1;
	long long c2 = 1;
	for (int i = 0; i < s; ++i)
	{
		c1 = c1 * a;
		c2 = c2 * b;
	}
	return Fraction(c1, c2);
}

bool Fraction::operator==(const Fraction& fraction)
{
	return bool(this->a * fraction.b == this->b * fraction.a);
}

bool operator==(const long long k, const Fraction& fraction)
{
	Fraction c = Fraction(k, 1);
	return (c == fraction);
}

bool operator==(Fraction& fraction, const long long k)
{
	Fraction c = Fraction(k, 1);
	return (fraction == c);
}

bool Fraction::operator>(const Fraction& fraction)
{
	return bool((this->a / this->b) > (fraction.a / fraction.b));
}

bool operator>(const long long k, const Fraction& fraction)
{
	Fraction c = Fraction(k, 1);
	return (c > fraction);
}

bool operator>(Fraction& fraction, const long long k)
{
	Fraction c = Fraction(k, 1);
	return (fraction > c);
}

bool Fraction::operator<(const Fraction& fraction)
{
	return bool((this->a / this->b) < (fraction.a / fraction.b));
}

bool operator<(const long long k, const Fraction& fraction)
{
	Fraction c = Fraction(k, 1);
	return (c < fraction);
}

bool operator<(Fraction& fraction, const long long k)
{
	Fraction c = Fraction(k, 1);
	return (fraction < c);
}

bool Fraction::operator<=(const Fraction& fraction)
{
	return bool((this->a / this->b) <= (fraction.a / fraction.b));
}

bool operator<=(const long long k, const Fraction& fraction)
{
	Fraction c = Fraction(k, 1);
	return (c <= fraction);
}

bool operator<=(Fraction& fraction, const long long k)
{
	Fraction c = Fraction(k, 1);
	return (fraction <= c);
}

bool Fraction::operator>=(const Fraction& fraction)
{
	return bool((this->a / this->b) >= (fraction.a / fraction.b));
}

bool operator>=(const long long k, const Fraction& fraction)
{
	Fraction c = Fraction(k, 1);
	return (c >= fraction);
}

bool operator>=(Fraction& fraction, const long long k)
{
	Fraction c = Fraction(k, 1);
	return (fraction >= c);
}