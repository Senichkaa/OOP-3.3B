//Source.cpp
#include "FuzzyNumber.h"

int main()
{
	FuzzyNumber N(4, 1, 7), M;

	cout << "N:" << endl;
	cout << N << endl;

	cin >> M;
	cout << "M:" << endl;
	cout << M << endl;

	FuzzyNumber C = N + M;
	cout << "Sum:" << endl;
	cout << C << endl;

	FuzzyNumber D = N * M;
	cout << "Multiply:" << endl;
	cout << D << endl;

	Triad A(2, 6, 9), B;

	cout << "A:" << endl;
	cout << A << endl;

	cin >> B;
	cout << "B:" << endl;
	cout << B << endl;

	if (A == B)
		cout << "triads are equal" << endl;
	else
		cout << "triads are not equal" << endl;

	if (A != B)
		cout << "triads are not equal" << endl;
	else
		cout << "triads are equal" << endl;

	if (A > B)
		cout << "Triad A is bigger than Triad B" << endl;
	else
		cout << "Triad A is smaller than Triad B" << endl;

	if (A < B)
		cout << "Triad A is smaller than Triad B" << endl;
	else
		cout << "Triad A is bigger than Triad B" << endl;

	if (A >= B)
		cout << "Triad A is bigger than/equal to Triad B" << endl;
	else
		cout << "Triad A is smaller than/equal to Triad B" << endl;

	if (A <= B)
		cout << "Triad A is smaller than/equal to Triad B" << endl;
	else
		cout << "Triad A is bigger than/equal to Triad B" << endl;
}