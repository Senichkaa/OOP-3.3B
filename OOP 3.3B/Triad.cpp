//Triad.cpp
#include "Triad.h"

Triad::Triad()
{
	set_x(0);
	set_r(0);
	set_l(0);
}

Triad::Triad(const double x, const double l, const double r)
{
	set_x(x);
	set_r(r);
	set_l(l);
}

Triad::Triad(const Triad& a)
{
	set_x(a.get_x());
	set_l(a.get_l());
	set_r(a.get_r());
}

Triad& Triad::operator=(const Triad& n)
{
	set_x(n.get_x());
	set_l(n.get_l());
	set_r(n.get_r());
	return *this;
}

Triad::operator string() const
{
	stringstream ss;
	ss << "x = " << x << endl;
	ss << "l = " << l << endl;
	ss << "r = " << r << endl;
	return ss.str();
}

bool operator==(const Triad& l, const Triad& r)
{
	return false;
}

bool operator!=(const Triad& l, const Triad& r)
{
	return false;
}

bool operator>=(const Triad& l, const Triad& r)
{
	return false;
}

bool operator<=(const Triad& l, const Triad& r)
{
	return false;
}

bool operator>(const Triad& l, const Triad& r)
{
	return false;
}

bool operator<(const Triad& l, const Triad& r)
{
	return false;
}

ostream& operator<<(ostream& out, const Triad& a)
{
	out << string(a);
	return out;
}

istream& operator>>(istream& in, Triad& a)
{
	double x, l, r;
	cout << "x = "; in >> x;
	cout << "l = "; in >> l;
	cout << "r = "; in >> r;
	a.set_x(x); a.set_l(l); a.set_r(r);
	return in;
}
