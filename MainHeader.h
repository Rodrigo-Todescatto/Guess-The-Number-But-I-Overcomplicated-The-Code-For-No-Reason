#pragma once
#include <iostream>

using namespace std;

#define FINAL_RELEASE true

void Program() {

#if FINAL_RELEASE == false

	cout << "Build is in debug mode." << endl;

	const string BUILDDEBUG = "Build Version : 1.0.0 DEBUG";

	cout << BUILDDEBUG << endl;

#endif // FINAL_RELEASE false

#if FINAL_RELEASE == true

	cout << "Build is final release." << endl;

	const string BUILDFR = "Build Version: 1.0.0";

	cout << BUILDFR << endl;

#endif // FINAL_RELEASE true

}


