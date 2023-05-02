#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float num1,num2;
	cout << "Enter two decimal number: " << endl;
	cin >> num1 >> num2;
	cout << setprecision(4);
	cout << num1 << endl;
	cout << num2 << endl;
	
	if (num1 == num2)
		cout << "They are the same";
	
	else
		cout << "They are different";

	return 0;
}
