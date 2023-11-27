// Elena Curmei
// CIS 1202 201
// 11-26-2023
// Define a Truck class that inherits from Vehicle. Define the member variables and method prototypes

#ifndef TRUCK_H_
#define TRUCK_H_

#include <iostream>
#include "Vehicle.h"

using namespace std;

// Create a class Car inherited from Vehicle; Define a member variable for towing capacity
class Truck : public Vehicle
{
	int tow_capacity;
public:

	// Define truck constructor and appropriate getters and setters
	Truck();

	// Parameterized constructor
	Truck(string m, int y, int t);

	int getTowCapacity();
	void setTowCapacity(int t);

	//Define a displayInfo method to display the contents of the object
	void displayInfo();
};

#endif
