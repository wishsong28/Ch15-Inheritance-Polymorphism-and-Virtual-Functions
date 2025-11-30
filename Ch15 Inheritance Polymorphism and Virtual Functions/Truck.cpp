//Rebekah Bisbee
//25.FA.CIS.1202.501 C++ Software Development
//Ch15 Inheritance, Polymorphism, and Virtual Functions - Programming Assignment #14
//11.30.2025

//This is the implementation file for the Truck base class

#include "Truck.h"
#include <iostream>

using namespace std;

//Parameterized constructor implementation
Truck::Truck(string TruckMfr, int TruckYear, int towCap) : Vehicle(TruckMfr, TruckYear)
{ towingCapacity = towCap; }

//Getter implementations
int Truck::getTowingCapacity() const
{ return towingCapacity; }

//Setter implementations
void Truck:: setTowingCapacity(int &capacity)
{ towingCapacity = capacity; }

//Display implementation
void Truck::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Towing Capacity (lbs): " << towingCapacity << endl;
}
