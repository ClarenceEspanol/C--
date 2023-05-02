#include <iostream>

using namespace std;

int main()
{
	int marks;
	
	cout << "Enter Grading Marks:" ;
	cin >> marks;
	if (marks < 25) {
		cout << "Grade F ";
	}
	else if (marks > 25 && marks < 45)
		cout << "Grade E ";
	else if (marks > 46 && marks < 50)
		cout << "Grade D ";
	else if (marks > 51 && marks < 60)
		cout << "Grade C ";
	else if (marks > 61 && marks < 80)
		cout << "Grade B ";
	else if (marks > 80 ) 
		cout << "Grade A ";
	
	return 0;
}
