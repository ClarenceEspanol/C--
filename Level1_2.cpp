#include <iostream>

using namespace std;

int main()
{
	int v1, v2, greatest;
	
	cout << "Enter two value: ";
	cin >> v1 >> v2;
	if (v1 > v2){
		greatest = v1;
	cout << "The value is greatest. " << greatest << endl;
	}
	else {
		greatest = v2;
	cout << "The value is greatest. " << greatest << endl;
	}
	return 0;
}
