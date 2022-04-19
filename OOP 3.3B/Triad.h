//Triad.h
#pragma once
#pragma pack(1)
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Triad
{
private:
	double x, l, r;
public:
	Triad();
	Triad(const double x, const double l, const double r);
	Triad(const Triad& a);

	void set_x(double value) { x = value; }
	void set_l(double value) { l = value; }
	void set_r(double value) { r = value; }

	double get_x() const { return x; }
	double get_l() const { return l; }
	double get_r() const { return r; }

	Triad& operator=(const Triad& n);
	operator string() const;

	friend bool	operator ==(const Triad& l, const Triad& r);
	friend bool	operator !=(const Triad& l, const Triad& r);
	friend bool	operator >=(const Triad& l, const Triad& r);
	friend bool	operator <=(const Triad& l, const Triad& r);
	friend bool	operator >(const Triad& l, const Triad& r);
	friend bool	operator <(const Triad& l, const Triad& r);

	friend ostream& operator << (ostream& out, const Triad& a);
	friend istream& operator >> (istream& in, Triad& a);
};
