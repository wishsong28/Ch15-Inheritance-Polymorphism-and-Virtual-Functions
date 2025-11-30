//Rebekah Bisbee
//25.FA.CIS.1202.501 C++ Software Development
//Ch15 Inheritance, Polymorphism, and Virtual Functions - Programming Assignment #14
//11.30.2025

//This is the header file for the Vehicle base class

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

using namespace std;

class Vehicle
{
    private:
        string manufacturer;
        int yearBuilt;

    public:
        //Default constructor
		Vehicle()
        {   
            manufacturer = " ";
		    yearBuilt = 0;
        }
        
        //Parameterized constructor
        Vehicle(string vehicleManufr, int vehicleYear)
        {
            manufacturer = vehicleManufr;
		    yearBuilt = vehicleYear;
		}
        
        //Getters
        string getManufacturer() const
		{ return manufacturer; }

        int getYearBuilt() const
		{ return yearBuilt; }

        //Setters
        void setManufacturer(string &vehicleManufr)
		{ manufacturer = vehicleManufr; }

        void setYearBuilt(int &vehicleYear)
		{ yearBuilt = vehicleYear; }
        
        //Display
        void displayInfo();
};

#endif