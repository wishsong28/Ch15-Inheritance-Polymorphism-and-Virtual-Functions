//Rebekah Bisbee
//25.FA.CIS.1202.501 C++ Software Development
//Ch15 Inheritance, Polymorphism, and Virtual Functions - Programming Assignment #14
//11.30.2025

//This is the implementation file for the Vehicle base class

#include "Vehicle.h"
#include <iostream>

using namespace std;

//***************************************************************************
//Definition of Vehicle handling parameterized Constructor implementation   *
//***************************************************************************
Vehicle::Vehicle (string vehicleMfr, int vehicleYear)
{
    manufacturer = vehicleMfr;
    yearBuilt = vehicleYear;
}

//***************************************************************************
//Definition of getManufacturer handling Getter implementation				*
//***************************************************************************
string Vehicle::getManufacturer() const
{ return manufacturer; }

//***************************************************************************
//Definition of getYearBuilt handling Getter implementation					*
//***************************************************************************
int Vehicle::getYearBuilt() const
{ return yearBuilt; }

//***************************************************************************
//Definition of setManufactrer handling Setter implementation				*
//***************************************************************************
void Vehicle::setManufacturer(string &vehicleMfr)
{  manufacturer = vehicleMfr; }

//***************************************************************************
//Definition of setYearBuilt handling Setter implementation					*
//***************************************************************************
void Vehicle::setYearBuilt(int &vehicleYear)
{ yearBuilt = vehicleYear; }

//***************************************************************************
//Definition of displayInfo to display vehicle info details					*
//***************************************************************************
void Vehicle::displayInfo() const
{
	cout << "\nVehicle Information:\n";
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year Built: " << yearBuilt << endl;
}


