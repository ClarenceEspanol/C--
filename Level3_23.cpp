#include <iostream>

using namespace std;

int main()
{
	int num1,num2;
	cout << "Enter a year: ";
	cin >> num1;
	
	if ((num1 % 400 == 0) || ((num1 % 4 == 0) && (num1 % 100 != 0))) {
		cout << num1 << " is a leap year" << endl;
		num2 = num1%100;
		if (num2 % 3 == 0) {
			cout << "This leap year is divisible by 3";
		}
		else {
			cout << "This leap year is NOT divisible by 3";
		}
	}
	else {
		cout << num1 << " is NOT a leap year" << endl;
		if (num1 % 2 == 0) {
			cout << "This year is even.";
		}
		else {
			cout << "This year is odd.";
		}
	}
	return 0;
}
