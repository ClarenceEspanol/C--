#include <iostream>

using namespace std;

int main()
{
	int unit;
	double amount;
	
	cout << "Enter the unit: ";
	cin >> unit;
	
	amount = unit * 100;
	
	if (amount >= 100000)
		cout << "Total Discounted Cost: " << amount - (amount * .1);
	
	else 
		cout << " Total Cost: " << amount;
	
	return 0;
}
