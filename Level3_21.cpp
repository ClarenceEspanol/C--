#include <iostream>

using namespace std;

int main () 
{
	int a,b;
	cout << "Enter a month(1-12): " << endl;
	cin >> a;
	cout << "Enter a year: " << endl;
	cin >> b;
	
	if ((a == 2) && ((b % 400 == 0) || ((b % 4 == 0) && (b % 100 != 0))))
		cout << "February " << b << " have 29 days";

	else if (a == 2)
		cout << "February " << b << " have 28 days";

	else if (a == 1)
		cout << "January " << b << " have 31 days";

	else if (a == 3)
		cout << "March " << b << " have 31 days";

	else if (a == 5)
		cout << "May " << b << " have 31 days";

	else if (a == 7)
		cout << "July " << b << " have 31 days";

	else if (a == 8)
		cout << "August " << b << " have 31 days";

	else if (a == 10)
		cout << "October " << b << " have 31 days";

	else if (a == 12)
		cout << "December " << b << " have 31 days";

	else if (a == 4)
		cout << "April " << b << " have 30 days";

	else if (a == 6)
		cout << "June " << b << " have 30 days";

	else if (a == 9)
		cout << "September " << b << " have 30 days";

	else if (a == 11)
		cout << "November " << b << " have 30 days";

	else
		cout << "Error";

	return 0;
}
