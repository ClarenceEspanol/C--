#include<iostream>
/*
1 2
3 4
5 6
*/
using namespace std;

int main()
{
	int num[3][2] ={{1,2},
					{3,4},
					{5,6}
	};
	cout << num[0][0] << " ";
	/*cout << num[0][1] << endl;
	cout << num[1][0] << " " ;
	cout << num[1][1] << endl;
	cout << num[2][0] << " ";
	cout << num[2][1] << " ";
	*/


	int num[50][50],row = 0,col = 0;
	
	cout << "Enter Number of Elements: " << endl;
	cout << "Enter Number of Rows: ";
	cin >> row;
	cout << "Enter Number of Columns: ";
	cin >> col;
	cout << "Please Enter " << row*col << " " << "values of array " <<endl;
	//input user for loop values
	for(int q=0;q<row;q++){
		for(int w=0;w<col;w++){
			cin >> num[q][w];
		}
	}
	//output on user input
	for(int b=0;b<3;b++){
		cout << endl;
		for(int g=0;g<2;g++){
			cout << num[b][g] << " ";
		}
	}

	return 0;
}
