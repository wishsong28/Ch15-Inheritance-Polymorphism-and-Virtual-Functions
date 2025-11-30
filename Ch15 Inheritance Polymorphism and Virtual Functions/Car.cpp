//Rebekah Bisbee
//25.FA.CIS.1202.501 C++ Software Development
//Ch15 Inheritance, Polymorphism, and Virtual Functions - Programming Assignment #14
//11.30.2025

//This is the implementation file for the Car base class

#include "Car.h"
#include <iostream>

using namespace std;

//Parameterized constructor implementation
Car::Car(string carMfr, int carYear, int carDoors) : Vehicle(carMfr, carYear)
{ numDoors = carDoors; }

//Getter implementations
int Car::getNumDoors() const
{ return numDoors; }

//Setter implementations
void Car::setNumDoors(int &cardoors)
{ numDoors = cardoors; }

//Display implementation
void Car::displayInfo() const
{
	cout << "Number of Doors: " << numDoors << endl;
}
