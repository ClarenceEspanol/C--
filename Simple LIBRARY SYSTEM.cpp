#include <iostream>

using namespace std;

int main()
{
    string is, tl, ca, au, ans;
    string id, nm, crs;
    int num, yr;
    int a, b, c, d, e, f, g, h, i, j, k, l;
	
    cout << "Clarence Espanol LIBRARY SYSTEM " << endl;
    cout << "************************************** " << endl;
	editstatement:
    cout << "[0] END" << endl;
    cout << "[1] ADD" << endl;
    cout << "[2] EDIT" << endl;
    cout << "[3] DELETE" << endl;
    cout << "[4] SEARCH" << endl;
    cout << "[5] BORROW" << endl;
    cout << "[6] RETURN" << endl;
    cout << "PLEASE SELECT FROM MENU" << endl;
    cin >> num;
	if(num == 0) {
		cout <<" The Program Ends " << endl;
	} 
    else if(num == 1){
    
    cout <<" Add Menu" << endl;
    cout <<"*************************** " << endl;
    cout << "[0] EXIT" << endl;
    cout << "[1] Add Books " << endl;
    cout << "[2] Add Member" << endl;
    cout << "Your Choice:" << endl;
		cin >> num;
  }
		else if(num == 0){
			goto editstatement;
		}
		
		else if(num == 1) {

			cout << "Add Book Screen " << endl;
			cout <<"*************************** " << endl;
			cout <<"Please Enter the following information: " << endl;
			cout <<"ISBN: ";
			cin >> is;
			cout <<"TITLE: ";
			cin >> tl;
			cout <<"CATEGORY: ";
			cin >> ca;
			cout <<"AUTHOR: ";
			cin >> au;
			cout <<"YEAR: ";
			cin >> yr;
			cout <<"Are you sure you want to add the following infomation? " << endl;
			cout <<"[Y] Yes " << endl;
			cout <<"[N] No " << endl;
			cin >> ans;
		}

    else if(ans == "Y"){
				cout << "Yes ";
    }
    else if (ans == "N"){
				cout << "No ";
		}		
		
   else if (num == 2){

        cout << "Add Member Screen" << endl;
        cout << "******************"<< endl;
        cout << "Please Enter the Following Questions" <<endl;
        cin >> ans;
        cout << "I.D Number: ";
        cin >> id;
        cout << "Name: ";
        cin >> nm;
        cout << "Course: ";
        cin >> crs;
        cout << "Year Level: ";
        cin >> yr;
        cout << "Are you sure you want to ADD the following questions?" << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
        cin >> ans;
       }
    else if (ans == "Y") {
            cout << "Yes";
    }
    else if (ans == "N") {
            cout << "No";
       }  
    
    else if (num == 2) {
    
        cout << "Edit Menu" << endl;
        cout << "**********" << endl;
        cout << "[0] Exit" << endl;
        cout << "[1] Edit Book" << endl;
        cout << "[2] Edit Member" << endl;
        cout << "Your Choice: " << endl;
        cin >> num;
        
    } 
	else if(num == 0){
			goto editstatement;
		}
		
    else if (num == 1){
    
        cout << "Edit Book Screen" << endl;
        cout << "*****************" << endl;
        cout << "Please Enter the ISBN of the book you want to edit:" << endl;
        cout << "Please enter the following information and underscore (_) if you dont want to change the previously saved value in the database" << endl;
        cout << "ISBN: ";
        cin >> is;
        cout << "Title: ";
        cin >> tl;
        cout << "Category: ";
        cin >> ca;
        cout << "Author: ";
        cin >> au;
        cout << "Year:";
        cin >> yr;
        cout << "Are you sure you want to upadate the following information " << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
        cin >> ans;
        cout << "Do you want to edit again?" << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
        cin >> ans;
       }
    else if (ans == "Y") {
            cout << "Yes";
    }
    else if (ans == "N") {
            cout << "No";
    }
    
     else if (num == 2) {
    
        cout << "Edit Member Screen" << endl;
        cout << "********************" << endl;
        cout << "Please enter the ID Number of the user you want to edit:" << endl;
        cin >> ans;
        cout << "Please enter the following information and underscore (_) you dont want to change the previously saved value in the database" << endl;
        cin >> ans;
        cout << "ID Number: ";
        cin >> id;
        cout << "Name: ";
        cin >> nm;
        cout << "Course: ";
        cin >> crs;
        cout << "Year Level: ";
        cin >> yr;
        cout << "Are you sure you want to update the following questions? (<insert here the data that the user wants to update>)" << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
        cin >> ans;
        cout << "Do you want to edit again?" << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
        cin >> ans;
       }
    else if (ans == "Y") {
            cout << "Yes";
    }
    else if (ans == "N") {
            cout << "No";
    }  
    
    else if (num == 3) {
    
        cout << "Delete Menu" << endl;
        cout << "************" << endl;
        cout << "[0] Exit" << endl;
        cout << "[1] Delete Book" << endl;
        cout << "[2] Delete Member" << endl;
        cout << "Your Choice: " << endl;
        cin >> num;
    }    
    else if(num == 0){
			goto editstatement;
		}
    if (num == 1) {
    
        cout << "Delete Book Screen" << endl;
        cout << "********************" << endl;
        cout << "Please enter the ISBN of the book you want to delete :" << endl;
        cout << "Do you really want to delete the book with IBSN <enter the IBSN here>?" << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
        cin >> ans;
        cout << "Do you want to delete again? " << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
       }
    else if (ans == "Y") {
            cout << "Yes";
    }
     else if (ans == "N") {
            cout << "No";
    }
        
    else if (num == 2) {
    
        cout << "Delete Member Screen" << endl;
        cout << "**********************" << endl;
        cout << "Please enter the ID NUMBER of the user you want to delete :" << endl;
        cout << "Do you really want to delete the member with ID NUMBER <enter the ID NUMBER here>" << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
        cin >> ans;
        cout << "Do you want to delete again? " << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
    }
     else if (ans == "Y") {
            cout << "Yes";
    }
    else if (ans == "N") {
            cout << "No";
    }
    
    else if (num == 4) {
    
        cout << "Search Menu" << endl;
        cout << "************" << endl;
        cout << "[0] Exit" << endl;
        cout << "[1] Search Book" << endl;
        cout << "[2] Search Member" << endl;
        cout << "Your Choice: " << endl;
        cin >> num;
     }
    else if(num == 0){
		goto editstatement;
		}	
    else if (num == 1) {
        cout << "Please enter the ISBN the book you want to search" << endl;
        cout << "ISBN: ";
        cin >> is;
        cout << "Title: ";
        cin >> tl;
        cout << "Category: ";
        cin >> ca;
        cout << "Author: ";
        cin >> au;
        cout << "Year:";
        cin >> yr;
        cout << "Do you want to search again?" << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
     }
    
    else if (ans == "Y") {
            cout << "Yes";
    }
    else if (ans == "N") {
            cout << "No";
    }
    
    else if (num == 2) {
    
        cout << "SEARCH MEMBER SCREEN" << endl;
        cout << "*********************" << endl;
        cout << "Please enter the ID NUMBER of the user you want to search" << endl;
        cout << "ID Number: ";
        cin >> id;
        cout << "Name: ";
        cin >> nm;
        cout << "Course: ";
        cin >> crs;
        cout << "Year Level: ";
        cin >> yr;
        cout << "Do you want to search again?" << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
    }
    
    else if (ans == "Y") {
            cout << "Yes";
    }
    else if (ans == "N") {
            cout << "No";
    }
    
    else if (num == 5) {
    
        cout << "BORROW BOOK SCREEN" << endl;
        cout << "*******************" << endl;
        cout << "[0] Exit" << endl;
        cout << "[1] Borrow Book" << endl;
        cout << "[2] Borrow Member" << endl;
        cout << "Your Choice" << endl;
        cin >> num;
        cout << "Please enter the ISBN of the book you want to borrow [O to exi]" << endl;
        cout << "ISBN: ";
        cin >> is;
        cout << "Title: ";
        cin >> tl;
        cout << "Category: ";
        cin >> ca;
        cout << "Author: ";
        cin >> au;
        cout << "Year:";
        cin >> yr;
    }
    else if(num == 0){
			goto editstatement;
		}
    else if (num == 1) {
    
        cout << "Please enter the ID NUMBER of the member who will be borrow [0 to exit]" << endl;
        cout << "ID Number: ";
        cin >> id;
        cout << "Name: ";
        cin >> nm;
        cout << "Course: ";
        cin >> crs;
        cout << "Year Level: ";
        cin >> yr;
        cout << "Are you sure you want to borrow this book?" << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
        cin >> ans;
        cout << "Do you want to borrow again?" << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
        cin >> ans;
    }
    
    else if (ans == "Y") {
            cout << "Yes";
    }
    else if (ans == "N") {
            cout << "No";
    }
     
    else if (num == 6) {
    
        cout << "RETURN BOOK SCREEN" << endl;
        cout << "*******************" << endl;
        cout << "[0] Exit" << endl;
        cout << "[1] Return Book" << endl;
        cout << "[2] Return Member" << endl;
        cout << "Your Choice" << endl;
        cin >> ans, k, l;
        cout << "Please enter the ISBN of the book you want to return [O to exi]" << endl;
        cout << "ISBN: ";
        cin >> is;
        cout << "Title: ";
        cin >> tl;
        cout << "Category: ";
        cin >> ca;
        cout << "Author: ";
        cin >> au;
        cout << "Year:";
        cin >> yr;
        
    }
    else if(num == 0){
			goto editstatement;
		}
    else if (num == 1) {
    
        cout << "Please enter the ID NUMBER of the member who will be return [0 to exit]" << endl;
        cout << "ID Number: ";
        cin >> id;
        cout << "Name: ";
        cin >> nm;
        cout << "Course: ";
        cin >> crs;
        cout << "Year Level: ";
        cin >> yr;
        cout << "Are you sure you want to return this book?" << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
        cin >> ans;
        cout << "Do you want to return book again?" << endl;
        cout << "[Y] Yes" << endl;
        cout << "[N] No" << endl;
        cin >> ans;
    }
    
    else if (ans == "Y") {
            cout << "Yes";
    }
    else if (ans == "N") {
            cout << "No";
    }
	return 0;
}
    