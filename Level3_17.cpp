#include <iostream>

using namespace std;

int main()
{
	int num1,num2,num3,num4;
	cout << "Enter 4 number: " << endl;
	cin >> num1 >> num2 >> num3 >> num4;

	
	if (num1 > num2 && num1 > num3 && num1 > num4)
		cout << "The greatest is: " << num1 << endl;

	else if (num2 > num1 && num2 > num3 && num2 > num4)
		cout << "The greatest is: " << num2 << endl;

	else if (num3 > num1 && num3 > num2 && num3 > num1)
		cout << "The greatest is: " << num3 << endl;
	
	else if (num4 > num1 && num4 > num2 && num4 > num3)
		cout << "The greatest is: " << num4 << endl;

	return 0;
}
