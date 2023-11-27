// Elena Curmei
// CIS 1202 201
// 11-26-2023
//Displays the implementation of the methods  for the Vehicle class

#include <iostream>
#include "Vehicle.h"

using namespace std;

// Default constructor
Vehicle::Vehicle()
{
	manufacturer = "";
	year_built = 0;
}

// Parameterized constructor
Vehicle::Vehicle(string m, int y)
{
	manufacturer = m;
	year_built = y;
}

// Getters and setters for the manufacturer and year built
string Vehicle::getManufacturer()
{
	return manufacturer;
}

int Vehicle::getYear()
{
	return year_built;
}

void Vehicle::setManufacturer(string m)
{
	manufacturer = m;
}

void Vehicle::setYear(int y)
{
	year_built = y;
}

// Method to display vehicle information
void Vehicle::displayInfo()
{
	cout << "Vehicle Information:" << endl;
    cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year Built: " << getYear() << endl;
}

