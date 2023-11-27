// Elena Curmei
// CIS 1202 201
// 11-26-2023
//Displays the implementation of the methods  for the Car class

#include <iostream>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

// Default constructor
Car :: Car() : Vehicle()
{
doorsNumber = 0;
}

// Parameterized constructor
Car :: Car(string m, int y, int n) : Vehicle(m, y)
{
doorsNumber = n;
}

// Getter and setter for the number of doors
int Car :: getDoors()
{
return doorsNumber;
}

void Car :: setDoors(int n)
{
doorsNumber = n;
}

//Define a displayInfo method to display the contents of the object(call the base class method to display the Vehicle info, then display the Car info)
void Car :: displayInfo()
{
Vehicle::displayInfo();
cout << "Doors: " << getDoors() << endl;
}