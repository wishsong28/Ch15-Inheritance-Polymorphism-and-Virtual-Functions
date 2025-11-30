//Rebekah Bisbee
//25.FA.CIS.1202.501 C++ Software Development
//Ch15 Inheritance, Polymorphism, and Virtual Functions - Programming Assignment #14
//11.30.2025

//This is the implementation file for the Vehicle base class

#include "Vehicle.h"
#include <iostream>

using namespace std;

//Parameterized constructor implementation
Vehicle::Vehicle (string vehicleMfr, int vehicleYear)
{
    manufacturer = vehicleMfr;
    yearBuilt = vehicleYear;
}

//Getter implementations
string Vehicle::getManufacturer() const
{ return manufacturer; }

int Vehicle::getYearBuilt() const
{ return yearBuilt; }

//Setter implementations
void Vehicle::setManufacturer(string &vehicleMfr)
{  manufacturer = vehicleMfr; }

void Vehicle::setYearBuilt(int &vehicleYear)
{ yearBuilt = vehicleYear; }

//Display implementation
void Vehicle::displayInfo()
{
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}


