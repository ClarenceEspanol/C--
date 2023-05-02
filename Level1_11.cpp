#include <iostream>

using namespace std;

int main()
{
	string let;
	
	cout << "Enter Letter: ";
	cin >> let;
	
	if(let >= "A" && let <= "Z")
		cout << "You've Eneter Uppercase Letter. ";
	
	else if(let >= "a" && let <= "z")
		cout << "You've Enter Lowercase Letter. ";
	else
		cout << "Invalid Letter: ";
	
	return 0;
}
