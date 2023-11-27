// Elena Curmei
// CIS 1202 201
// 11-26-2023
//Displays the implementation of the methods  for the Truck class

#include <iostream>
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

// Default constructor
Truck::Truck() : Vehicle()
{
	tow_capacity = 0;
}

// Parameterized constructor
Truck::Truck(string m, int y, int t) : Vehicle(m, y)
{
	tow_capacity = t;
}

// Getter and setter for towing capacity
int Truck::getTowCapacity()
{
	return tow_capacity;
}

void Truck::setTowCapacity(int t)
{
	tow_capacity = t;
}

//Define a displayInfo method to display the contents of the object(call the base class method to display the Vehicle info, then display the Truck info)
void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << getTowCapacity() << endl;
}

