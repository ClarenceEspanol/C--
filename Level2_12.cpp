#include <iostream>

using namespace std;

int main()
{
	int yr;
	
	cout << "Enter Year: ";
	cin >> yr;
	
	if(yr % 4 == 0 || yr % 400 == 0)
		cout << "It is leap year. ";
	else
		cout << "It is NOT Leap year. ";
	
	return 0;
}
