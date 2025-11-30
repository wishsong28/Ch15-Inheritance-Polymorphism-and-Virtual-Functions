//Rebekah Bisbee
//25.FA.CIS.1202.501 C++ Software Development
//Ch15 Inheritance, Polymorphism, and Virtual Functions - Programming Assignment #14
//11.30.2025

//This is the header file for the Truck base class

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <string>
using namespace std;

class Truck : public Vehicle
{
    private:
        int towingCapacity;

    public:
        //Default constructor
        Truck() : Vehicle()
        { towingCapacity = 0; }

        //Parameterized constructor
        Truck(string, int, int);

        //Getter
        int getTowingCapacity() const;

        //Setter
        void setTowingCapacity(int &);

        //Display
        void displayInfo() const;
};

#endif
