//Rebekah Bisbee
//25.FA.CIS.1202.501 C++ Software Development
//Ch15 Inheritance, Polymorphism, and Virtual Functions - Programming Assignment #14
//11.30.2025

//This is the header file for the Car base class

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <string>
using namespace std;

class Car : public Vehicle
{
    private:
        int numDoors;

    public:
		//Default constructor
        Car() : Vehicle()
        { numDoors = 0; }
    
        //Parameterized constructor
        Car(string, int, int);

        //Getter
        int getNumDoors() const;

        //Setter
        void setNumDoors(int &);

        //Display
        void displayInfo() const;
};

#endif

