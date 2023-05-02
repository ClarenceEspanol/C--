#include <iostream>

using namespace std;

int main ()
{
	int nb;
	cout << "Enter a number: ";
	cin >> nb;
	
	if (nb < 0) {
		cout << nb << " is number negative number." << endl;
		cout << "new value is: " << -(nb) << endl;
	}
	else if (nb > 0) {
		cout << nb << " is number positive number." << endl;
		cout << "new vablue is: " << -(nb) << endl;
	}
	else if (nb == 0)
		cout << nb << " is not postive nor negative number." << endl;

	return 0;
}
