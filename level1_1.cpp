#include <iostream>

using namespace std;

int main()
{
	int length, breadth;

	cout << "Enter value of length: ";
	cin >> length;
	cout << "Enter value of breadth: ";
	cin >> breadth;
	if (length==breadth){
		cout << "It is square. ";
	}
	else{
		cout << "It is NOT square. ";		
	}
	return 0;
}
