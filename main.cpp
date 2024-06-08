#include <iostream>
using namespace std;

void m(double* a, double* b)
{
	cout << ((*a > *b) ? "number1 > number2." : "number1 < number2.");
}

int main()
{
	double n1, n2;
	cout << "Enter the first number: ";
	cin >> n1;
	cout << "Enter the second number: ";
	cin >> n2;
	double* number1 = &n1;
	double* number2 = &n2;
	m(number1, number2);
	return 0;
}