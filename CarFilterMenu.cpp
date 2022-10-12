// CarFilterMenu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include<sstream>  

using namespace std;

int main()
{
	int choice;
	string makeInitial;
	int year;
	string cylinders;
	bool run = true;
	
	while (run != false) {
		cout << "*******************************\n";
		cout << "Welcome to the car filter program\n\n";
		cout << " 1 - Ford\n";
		cout << " 2 - Nissan\n";
		cout << " 3 - Volvo\n";
		cout << " 4 - Jaguar\n";
		cout << " 5 - QUIT.\n\n";
		cout << "Please enter your choice and press return: \n";

		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Your car is a Ford" <<"\n\n";
			
			makeInitial = "F";

			cout << "Please enter number of cylinders (6 or 8) \n";
			cin >> cylinders;
			if (cylinders == "6") {
				cout << "Car cylinders required = 6" << "\n\n";
			}
			else if(cylinders == "8") {
				cout << "Car cylinders required = 8"  << "\n\n";
			}
			else {
				cout << "Invalid entry! Please enter a valid value (6 or 8): ";
				cin >> cylinders;
				cout << "Car cylinders required "<< cylinders << "\n\n";
			}

			cout << "Please enter the car year (between 1995 and 2015)\n";
			cin >> year;
			while (year < 1995 || year > 2015)
			{
				cout << "Invalid entry! Please enter a valid value: "<<"\n";
				cin >> year;
			}
			cout << "Your cars year is " << year << "\n\n";
			break;

		case 2:
			cout << "Your car is a Nissan" << "\n\n";

			makeInitial = "N";

			cout << "Please enter number of cylinders (4 or 6) \n";
			cin >> cylinders;
			if (cylinders == "4") {
				cout << "Car cylinders required = 4" << "\n\n";
			}
			else if (cylinders == "6") {
				cout << "Car cylinders required = 6" << "\n\n";
			}
			else {
				cout << "Invalid entry! Please enter a valid value (4 or 6): ";
				cin >> cylinders;
				cout << "Car cylinders required " << cylinders << "\n\n";
			}

			cout << "Please enter the car year (between 1995 and 2015)\n";
			cin >> year;
			while (year < 1995 || year > 2015)
			{
				cout << "Invalid entry! Please enter a valid value: " << "\n";
				cin >> year;
			}
			cout << "Your cars year is " << year << "\n\n";
			break;
			
		case 3:
			cout << "Your car is a Volvo" << "\n\n";

			makeInitial = "V";

			cout << "Please enter number of cylinders (15 or 20) \n";
			cin >> cylinders;
			if (cylinders == "15") {
				cout << "Car cylinders required = 15" << "\n\n";
			}
			else if (cylinders == "20") {
				cout << "Car cylinders required = 20" << "\n\n";
			}
			else {
				cout << "Invalid entry! Please enter a valid value (15 or 20): ";
				cin >> cylinders;
				cout << "Car cylinders required " << cylinders << "\n\n";
			}

			cout << "Please enter the car year (between 1995 and 2015)\n";
			cin >> year;
			while (year < 1995 || year > 2015)
			{
				cout << "Invalid entry! Please enter a valid value: " << "\n";
				cin >> year;
			}
			cout << "Your cars year is " << year << "\n\n";
			break;

		case 4:
			cout << "Your car is a Jaguar" << "\n\n";

			makeInitial = "J";

			cout << "Please enter number of cylinders (6 or 12) \n";
			cin >> cylinders;
			if (cylinders == "6") {
				cout << "Car cylinders required = 6" << "\n\n";
			}
			else if (cylinders == "12") {
				cout << "Car cylinders required = 12" << "\n\n";
			}
			else {
				cout << "Invalid entry! Please enter a valid value (6 or 12): ";
				cin >> cylinders;
				cout << "Car cylinders required " << cylinders << "\n\n";
			}

			cout << "Please enter the car year (between 1995 and 2015)\n";
			cin >> year;
			while (year < 1995 || year > 2015)
			{
				cout << "Invalid entry! Please enter a valid value: " << "\n";
				cin >> year;
			}
			cout << "Your cars year is " << year << "\n\n";
			break;

		case 5:
			cout << "QUITTING.\n\n";
			cout << "Goodbye.\n";
			cout << "*******************************\n";
			run = false;
			break;

		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}
		
		//Convert year int into string to retain leading 0
		stringstream ss;
		ss << year;
		string strYear;
		ss >> strYear;
		
		//Add leading 0 to cylinders string if required		
		size_t n = 2;
		int precision = n - std::min(n, cylinders.size());
		string s = string(precision, '0').append(cylinders);

		//print car make initial + last 2 digits of strings for year and cylinders to make filter model number
		cout << "Your filter model number required is: ";
		cout << makeInitial << strYear[2]<<strYear[3] << s <<"\n\n";

		cout << "Goodbye.\n";
		cout << "*******************************\n";
		run = false;
		break;
	}
	return 0;
}
