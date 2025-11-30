//Rebekah Bisbee
//25.FA.CIS.1202.501 C++ Software Development
//Ch15 Inheritance, Polymorphism, and Virtual Functions - Programming Assignment #14
//11.30.2025

//This is the implementation file for the Car base class

#include "Car.h"
#include <iostream>

using namespace std;

//***************************************************************************
//Definition of Car handling parameterized Constructor implementation       *
//***************************************************************************
Car::Car(string carMfr, int carYear, int carDoors) : Vehicle(carMfr, carYear)
{ numDoors = carDoors; }

//***************************************************************************
//Definition of getNumDoors handling Getter	implementation				    *
//***************************************************************************
int Car::getNumDoors() const
{ return numDoors; }

//***************************************************************************
//Definition of setNumDoors handling Setter	implementation				    *
//***************************************************************************
void Car::setNumDoors(int &cardoors)
{ numDoors = cardoors; }

//***************************************************************************
//Definition of displayInfo to display both vehicle and car info details    *
//***************************************************************************
void Car::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Doors: " << numDoors << endl;
}
