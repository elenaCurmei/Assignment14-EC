// Elena Curmei
// CIS 1202 201
// 11-26-2023
// Define a Car class that inherits from Vehicle.  Define the member variables and method prototypes

#ifndef CAR_H_
#define CAR_H_

#include <iostream>
#include "Vehicle.h"

using namespace std;

// Create a class Car inherited from Vehicle; Define a member variable for the number of doors
class Car : public Vehicle
{
	int doorsNumber;

public:

	//Define a Car constructor and appropriate getters and setters
	Car();

	// Parameterized constructor
	Car(string m, int y, int n);

	int getDoors();
	void setDoors(int n);

	//Define a displayInfo method to display the contents of the object
	void displayInfo();
};

#endif
