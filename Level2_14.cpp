#include <iostream>

using namespace std;

int main()
{
	int four;
	cout << "Enter four digit number: ";
	cin >> four;
	
	if(four > 0) {
		cout << four % 10;
		four = four / 10;
		cout << four % 10;
		four = four / 10;
		cout << four % 10;
		four = four / 10;
		cout << four % 10;
		four = four / 10;
	}

	return 0;
}
