//Rebekah Bisbee
//25.FA.CIS.1202.501 C++ Software Development
//Ch15 Inheritance, Polymorphism, and Virtual Functions - Programming Assignment #14
//11.30.2025

//This program acts as a short driver to access both base and derived classes.

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>

using namespace std;

//Function Prototypes
string getLineInput(const string &);
int getIntInput(const string &);


int main()
{
    string mfr;
    int year;

    //Vehicle class testing
    cout << "Vehicle Program\n";
    cout << "\nVehicle:\n";
    mfr = getLineInput("Enter the manufacturer: ");
    year = getIntInput("Enter the year built: ");

    //Create Vehicle object
    Vehicle vehicle(mfr, year);

    //Display Vehicle info
    vehicle.displayInfo();

    //Car class testing
    int doors;

    cout << "\nCar:\n";
    cin.ignore();

    mfr = getLineInput("Enter the manufacturer: ");
    year = getIntInput("Enter the year built: ");
    doors = getIntInput("Enter the number of doors: ");

    //Create Car object
    Car car(mfr, year, doors);

    //Display Car info
    car.displayInfo();

    //Truck class testing
    int capacity;

    cout << "\nTruck:\n";
    cin.ignore();

    mfr = getLineInput("Enter the manufacturer: ");
    year = getIntInput("Enter the year built: ");
    capacity = getIntInput("Enter the towing capacity (lbs): ");

    //Create Truck object
    Truck truck(mfr, year, capacity);

    //Display Truck info
    truck.displayInfo();

    return 0;
}

//Function to handle reading a string
string getLineInput(const string &mfr)
{
    string input;
    cout << mfr;
    getline(cin >> ws,input);
    return input;
}

//Function to handle reading an integer, with basic input validation
int getIntInput(const string &intLabel)
{
    int input;
    cout << intLabel;
    while (!(cin >> input))
    {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore();
    }
    return input;
}
