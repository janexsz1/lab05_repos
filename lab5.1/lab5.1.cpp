// lab5.1.cpp 
#include <iostream>
#include <cmath>

using namespace std;

double k(const double x, const double y);

int main() {
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;

	double c = (pow(k(1 + p, pow(q, 2)), 2) * (1 + p * pow(q, 2)) - k(q * p, 1)) / (1 + k(pow(p, 2), q));

	cout << "c = " << c << endl;

	return 0; 
}


	double k(const double x, const double y) {
		return sin(x) / (y * y) + cos(y) / (x * x);
}