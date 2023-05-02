#include <iostream>

using namespace std;

int main()
{
	int salary, year;
	
	cout << "Enter Salary and year: ";
	cin >> salary >> year;
	if (year > 5)
		cout << year << " Your net bonus is" << salary + (salary * .5) << endl;
	else {
		cout << " Your net bonus is" << salary;
	}	
	return 0;
}
