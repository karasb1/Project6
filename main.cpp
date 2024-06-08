#include <iostream>
using namespace std;

void m(double* a)
{
	cout << ((*a > 0) ? "number +." : (*a < 0) ? "number -." : "number 0.");
}

int main()
{
	double n;
	cout << "Enter the number: ";
	cin >> n;
	double* number = &n;
	m(number);
	return 0;
}