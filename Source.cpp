#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void getTime();


int main() {
	getTime(); 
	
}

void getTime() {
	// Initilize variables
	int hour = 0;
	int min = 0;
	int sec = 0;
	int hour12 = 0;
	string amOrPm;

	// Set time with cin for user input and cout to prompt user for input.
	cout << "Please enter the current two digit hour" << endl;
	cin >> hour;
	// If user input is more than 23 output error.
	if (hour > 23) {
		cout << "Time is not allowed. Please enter a valid time.";
		cin >> hour;
	}
	// Set hour parameters for twelve hour clock.
	if (hour == 1) {
		hour12 = 1;
	}
	if (hour == 2) {
		hour12 = 2;
	}
	if (hour == 3) {
		hour12 = 3;
	}
	if (hour == 4) {
		hour12 = 4;
	}
	if (hour == 5) {
		hour12 = 5;
	}
	if (hour == 6) {
		hour12 = 6;
	}
	if (hour == 7) {
		hour12 = 7;
	}
	if (hour == 8) {
		hour12 = 8;
	}
	if (hour == 9) {
		hour12 = 9;
	}
	if (hour == 10) {
		hour12 = 10;
	}
	if (hour == 11) {
		hour12 = 11;
	}
	if (hour == 12) {
		hour12 = 12;
	}
	if (hour == 13) {
		hour12 = 1;
	}
	if (hour == 14) {
		hour12 = 2;
	}
	if (hour == 15) {
		hour12 = 3;
	}
	if (hour == 16) {
		hour12 = 4;
	}
	if (hour == 17) {
		hour12 = 5;
	}
	if (hour == 18) {
		hour12 = 6;
	}
	if (hour == 19) {
		hour12 = 7;
	}
	if (hour == 20) {
		hour12 = 8;
	}
	if (hour == 21) {
		hour12 = 9;
	}
	if (hour == 22) {
		hour12 = 10;
	}
	if (hour == 23) {
		hour12 = 11;
	}
	if (hour == 24) {
		hour12 = 12;
	}
	// Set time with cin for user input and cout to prompt user for input.
	cout << "Please enter the current two digit minute." << endl;
	cin >> min;
	// If user input is more than 60 output error.
	if (min >= 60) {
		cout << "Time is not allowed. Please enter a valid time.";
		cin >> min;
	}
	// Set time with cin for user input and cout to prompt user for input.
	cout << "Please enter the current two digit second." << endl;
	cin >> sec;
	// If user input is more than 60 output error.
	if (sec >= 60) {
		cout << "Time is not allowed. Please enter a valid time.";
		cin >> sec;
	}
	// Set AM or PM.
	cout << "AM or PM?" << endl;
	cin >> amOrPm;
	
	if (amOrPm == "am" || "AM") {
		amOrPm = "A M";
	}
	if (amOrPm == "pm" || "PM") {
		amOrPm = "P M";
	}
	
	
	

	cout << endl;
	cout << endl;

	// Output clock after input.
	cout << "            *************************" << "      " << "*************************" << endl;
	cout << "            *     " << "12-Hour Clock" << "     *" << "      *     " << "24-Hour Clock" << "     *" << endl;
	cout << "            *     " << setfill('0') << setw(2) << hour12 << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec << " " << amOrPm << "      *" << "      *       " << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec << "        *" << endl;
	cout << "            *************************" << "      " << "*************************" << endl;


	// Add time
	cout << endl;
	cout << endl;
	cout << "Add one hour. Enter h" << endl;
	cout << "Add one minute. Enter m" << endl;
	cout << "Add one second. Enter s" << endl;
	cout << "Enter E for Exit." << endl;
	char input;
	cin >> input;
	// Add one hour, one min or one sec.
	if (input == 'h') {
		hour = hour + 1;
		hour12 = hour12 + 1;
	}
	
	if (input == 'm') {
		min = min + 1;
	}
	if (input == 's') {
		sec = sec + 1;
	}
	if (hour == 24) {
		hour = 1;
	}
	// To exit program.
	if (input == 'E') {
		cout << "You have exited the program." << endl;
	}
	// Output clock after changes to hour, min or sec.
	cout << "            *************************" << "      " << "*************************" << endl;
	cout << "            *     " << "12-Hour Clock" << "     *" << "      *     " << "24-Hour Clock" << "     *" << endl;
	cout << "            *     " << setfill('0') << setw(2) << hour12 << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec << " " << amOrPm << "      *" << "      *       " << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << ":" << setfill('0') << setw(2) << sec << "        *" << endl;
	cout << "            *************************" << "      " << "*************************" << endl;
	
	
}