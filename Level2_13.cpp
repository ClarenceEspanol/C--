#include <iostream>

using namespace std;

int main()
{
	int age;
	string sx, ms;
	cout << "Enter Age,Sex(M or F),and Marital status(Y or N): ";
	cin >> age >> sx >> ms;
	
	if(sx == "F")
		cout << "You will work only in urban areas. ";
	else if(sx == "M" && age >= 20 && age <= 40)
		cout << "You may work in anywhere ";
	else if(sx == "M" && age >= 40 && age <= 60)
		cout << "You will work in urban areas only. ";
	else
		cout << "ERROR ";
	
	return 0;
}
