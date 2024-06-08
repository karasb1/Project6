#include <iostream>
using namespace std;

int main()
{
	double* n1 = new double;
	double* n2 = new double;
	cout << "Enter the first number: ";
	cin >> *n1;
	cout << "Enter the second number: ";
	cin >> *n2;

	cout << "Before:" << endl;
	cout << "number1 : " << *n1 << endl;
	cout << "number2 : " << *n2 << endl << endl;
	cout << "After:" << endl;

	double temp = *n1;
	*n1 = *n2;
	*n2 = temp;

	cout << "number1 : " << *n1 << endl;
	cout << "number2 : " << *n2 << endl;

	delete n1;
	delete n2;
	return 0;
}