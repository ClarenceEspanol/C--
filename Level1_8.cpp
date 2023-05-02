#include <iostream>

using namespace std;

int main()
{
	double ch, ca, attendance;
	
	cout << "Enter Number of class held: ";     
	cin >> ch;
	cout << "Enter Number of class attended: ";
	cin >> ca;
	attendance = (ca/ch)* 100;
	
	if (attendance < 75)
		cout << "Not allowed to take exam your " << "grade is " << attendance << "%" << endl;
	
	else if (attendance > 75)
		cout << "Allowed to take exam your " << "grade is " << attendance << "%" << endl; 
	
	return 0;
}
