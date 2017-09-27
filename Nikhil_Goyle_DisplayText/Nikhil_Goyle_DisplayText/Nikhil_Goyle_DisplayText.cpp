/*
Nikhil Goyle - 9/21/17 - Period 2

Assigment Name: Display Text

Introduction into C++ IDE Visual Studios 2015
Create New Project and Display Text to Console
*/

#include <iostream> 
#include <conio.h>

using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	cout << '/n';
}

void main() {
	const char* x = "Period 2";
	cout << "Nikhil Goyle" << " - " << x << " - " << "Hello world!" << endl;

	pause();
	return;
}
