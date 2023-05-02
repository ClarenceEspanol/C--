#include <iostream>

using namespace std;

int main()
{
	int p1, p2, p3;
	
	cout << "Enter 3 people age: ";
	cin >> p1 >> p2 >> p3;
	
	if (p1 < p2 && p1 < p3) {
		cout << p1 << " Is the youngest among them: ";
	}
	else if (p2 < p1 && p2 < p3) {
		cout << p2 << " Is the youngest among them: ";
	}
	else if (p3 < p1 && p3 < p2) {
		cout << p3 << " Is the youngest among them: ";
	}
	if (p1 > p2 && p1 > p3) {
		cout << p1 << " Is the oldest among them: ";
	}
	else if (p2 > p1 && p2 > p3) {
		cout << p2 << " Is the oldest among them: ";
	}
	else if (p3 > p1 && p3 > p2) {
		cout << p3 << " Is the oldest among them: ";
	}
	
	return 0;
}
