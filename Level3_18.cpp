#include <iostream>

using namespace std;

int main()
{
	float a;
	cout << "Enter a number with decimals: ";
	cin >> a;
	
	int b = (int)a;
	
	if (b < 0) {
		cout << b << endl;
		cout << "Negative Number" << endl;
		if (b < 1) {
			cout << "small";
		}
		else if (b > 1000000) {
			cout << "large";
		}
	}
	else if (b > 0) {
		cout << b << endl;
		cout << "Positive Number" << endl;
		if (b < 1) {
			cout << "small";
		}
		else if (b > 1000000) {
			cout << "large";
		}
	}
	else if (b == 0){
		cout << b << endl;
		cout << "zero" << endl;
	}
	return 0;
}
