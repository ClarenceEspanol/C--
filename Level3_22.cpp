#include <iostream>

using namespace std;

int main()
{
	string let;
	cout << "Enter a letter: " << endl;
	cin >> let;
	
	if ( let.size () > 1 ){
		cout << "Error" << endl;
		return 0;
	}
	
	if (!(let > "a" || let < "z" || let > "A" || let < "Z"))
		cout << "Error";

	
	else if (let == "a" || let == "e" || let == "i" || let == "o" || let == "u"
	|| let == "A" || let == "E" || let == "I" || let == "O" || let == "U")
		cout << "The letter is a vowel";

	
	else
		cout << "The letter is a consonant";
	
	return 0;
}
