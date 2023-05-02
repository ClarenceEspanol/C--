#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter value for num1: ";
	cin >> num1;
	cout << "Enter value for num2: ";
	cin >> num2;
	cout << "*********************" << endl;
	cout << "Sum: " << num1 + num2 << endl;
	cout << "Difference: " << num1 - num2 << endl;
	cout << "Product: " << num1 * num2 << endl;
	cout << "Quotient: " << (float)num1 / num2 << endl;
	cout << "Remainder: " << num1 % num2 << endl;
	return 0;
}
