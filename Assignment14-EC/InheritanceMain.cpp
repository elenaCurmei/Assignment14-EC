// Elena Curmei
// CIS 1202 201
// 11-26-2023
//Write a main function to test the classes and methods for Vehicle, Car, Truck.

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	// Used to store manufacturer
	string m;

	// Used to store year built
	int y;

	// Used to store number of doors
	int n;

	// Used to store towing capacity
	int tc;

	cout << "Vehicle Program:" << endl;

    //Get input from the user for manufacturer and year built, then store this information in a Vehicle object. 
	//Call the displayInfo method and display it on the output.
    cout << "\nVehicle: " <<endl;

	cout << "Enter the manufacturer: ";
	getline(cin, m);
	cout << "Enter the year built: ";
	cin >> y;

	Vehicle v(m, y);

	v.displayInfo();
	//Get input from the user for manufacturer, year built, and number of doors, then store this information in a Car object.
	//Call the displayInfo method and display it on the output.

	cout << "Car: " << endl;

	cin.clear();
	cin.ignore(100, '\n');

	cout << "Enter the manufacturer: ";
	getline(cin, m);
	cout << "Enter the year built: ";
	cin >> y;
	cout << "Enter the number of doors: ";
	cin >> n;

	Car c(m, y, n);

	c.displayInfo();

	//Get input from the user for manufacturer, year built, and towing capacity, then store this information 
	// in a Truck object.  Call the displayInfo method and display it on the output.

	cout << endl << "Truck: " << endl;

	cin.clear();
	cin.ignore(100, '\n');

	cout << "Enter the manufacturer: ";
	getline(cin, m);
	cout << "Enter the year built: ";
	cin >> y;
	cout << "Enter the towing capacity: ";
	cin >> tc;

	Truck t(m, y, tc);

	t.displayInfo();

	return 0;
}