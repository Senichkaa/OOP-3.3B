//FuzzyNumber.cpp
#include "FuzzyNumber.h"

FuzzyNumber::FuzzyNumber()
	:Triad(0,0,0)
{
}

FuzzyNumber::FuzzyNumber(double x = 0, double l = 0, double r = 0)
{
	if (x > ( x - l ) && ( x + r ) > x)
	{
		set_x(x);
		set_l(l);
		set_r(r);
	}
	else
	{
		set_x(0);
		set_r(0);
		set_l(0);
	}
}

FuzzyNumber::FuzzyNumber(const FuzzyNumber& v)
	:Triad(v)
{
}

FuzzyNumber& FuzzyNumber::operator--()
{
	this->set_x(this->get_x() - 1);
	return *this;
}

FuzzyNumber& FuzzyNumber::operator++()
{
	this->set_x(this->get_x() + 1);
	return *this;
}

FuzzyNumber FuzzyNumber::operator--(int)
{
	FuzzyNumber a(*this);
	this->set_r(this->get_r() - 1);
	return a;
}

FuzzyNumber FuzzyNumber::operator++(int)
{
	FuzzyNumber a(*this);
	this->set_r(this->get_r() + 1);
	return a;
}

FuzzyNumber operator+(FuzzyNumber a, FuzzyNumber b)
{
	FuzzyNumber T(0, 0, 0);
	T.set_l(a.get_l() + b.get_l());
	T.set_x(a.get_x() + b.get_x());
	T.set_r(a.get_r() + b.get_r());
	return T;

}

FuzzyNumber operator*(FuzzyNumber a, FuzzyNumber b)
{
	FuzzyNumber N(0,0,0);
	N.set_l(a.get_x() * b.get_x() - b.get_x() * a.get_l() - a.get_x() * b.get_l() - a.get_l() * b.get_l());
	N.set_x(a.get_x() * b.get_x());
	N.set_r(a.get_x() * b.get_x() + b.get_x() * a.get_r() + a.get_x() * b.get_r() + a.get_r() * b.get_r());
	return N;

}
