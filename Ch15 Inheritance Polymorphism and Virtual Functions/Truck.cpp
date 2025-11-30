//Rebekah Bisbee
//25.FA.CIS.1202.501 C++ Software Development
//Ch15 Inheritance, Polymorphism, and Virtual Functions - Programming Assignment #14
//11.30.2025

//This is the implementation file for the Truck base class

#include "Truck.h"
#include <iostream>

using namespace std;

//***************************************************************************
//Definition of Truck handling parameterized Constructor implementation     *
//***************************************************************************
Truck::Truck(string TruckMfr, int TruckYear, int towCap) : Vehicle(TruckMfr, TruckYear)
{ towingCapacity = towCap; }

//***************************************************************************
//Definition of getTowingCapacity handling Getter implementation		    *
//***************************************************************************
int Truck::getTowingCapacity() const
{ return towingCapacity; }

//***************************************************************************
//Definition of setTowingCapacity handling Setter implementation		    *
//***************************************************************************
void Truck:: setTowingCapacity(int &capacity)
{ towingCapacity = capacity; }

//***************************************************************************
//Definition of displayInfo to display both vehicle and truck info details  *
//***************************************************************************
void Truck::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Towing Capacity (lbs): " << towingCapacity << endl;
}
