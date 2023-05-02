#include <iostream>

using namespace std;

int main()
{
	int x = 2;
	int y = 5;
	int z = 0;
	
	if(x == 2)
		cout << "True ";
	else
		cout << "False ";
	cout << endl;
	
	if(x != 5)
		cout << "True ";
	else
		cout << "False ";
	cout << endl;
	
	if(x != 5 && y >= 5)
		cout << "True ";
	else
		cout << "False ";
	cout << endl;
	
	if(z != 0 || x == 2)
		cout << "True ";
	else
		cout << "False ";
	cout << endl;
	
	if(!(y < 10))
		cout << "True ";
	else
		cout << "False ";
	cout << endl;

	return 0;
}
