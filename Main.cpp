#include "MainHeader.h"
#include <iostream>
#include "cstdlib"

int main() {

	Program();

	_int64 RandomNumber;
	_int64 Number;

#if FINAL_RELEASE == true
	RandomNumber = rand() % 101;

	cout << "Enter a number between 0 to 100." << endl;
	cin >> Number;

	if (Number == RandomNumber) {

		cout << "ON THE FIRST TRY???!!! NO WAY" << endl;

	}

	while (Number != RandomNumber) {

		cout << "No. Try again." << endl;
		cin >> Number;

	}
 
	if (Number == RandomNumber) {

		cout << "You guessed it!" << endl;

	}


#endif // FINAL_RELEASE = true

#if FINAL_RELEASE == false
	RandomNumber = rand() % 101;

	cout << RandomNumber << endl;

	cout << "Enter a number between 0 to 100." << endl;
	cin >> Number;

	if (Number == RandomNumber) {

		cout << "ON THE FIRST TRY???!!! NO WAY" << endl;

	}

	while (Number != RandomNumber) {

		cout << "No. Try again." << endl;
		cin >> Number;

	}

	if (Number == RandomNumber) {

		cout << "You guessed it!" << endl;

	}


#endif // FINAL_RELEASE = false
}