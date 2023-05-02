#include <iostream>

using namespace std;

int main()
{
	string ans;
	
	cout << "Are you have a medical cause?('Y' or 'N') ";
	cin >> ans;
	
	if(ans == "Y") {
		cout << "You have a medical cause: ";
	}
	else if (ans == "N") {
		cout << "You're not have a medical cause: ";
	}
	return 0;
}