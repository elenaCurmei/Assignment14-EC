// Elena Curmei
// CIS 1202 201
// 11-26-2023
// Define the member variables and method prototypes for the Vehicle class

#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <iostream>

using namespace std;

// Create a class Vehicle and define member variables for manufacturer and year built
class Vehicle
{
    string manufacturer;
    int year_built;

public:

    //Define vehicle constructor and appropriate getters and setters
    Vehicle();

    // Parameterized constructor
    Vehicle(string m, int y);

    string getManufacturer();
    int getYear();

    void setManufacturer(string m);
    void setYear(int y);

    //Define a displayInfo method to display the contents of the object
    void displayInfo();
};

#endif
