#include <iostream>
using namespace std;

class Vehicle {
protected:
    int numWheels;

public:
    Vehicle(int wheels) : numWheels(wheels) {}

    virtual void start_engine() {
        cout << "Starting the engine of the vehicle." << endl;
    }

    virtual void displayInfo() {
        cout << "This is a vehicle with " << numWheels << " wheels." << endl;
    }
};

class Car : public Vehicle {
public:
    Car() : Vehicle(4) {} 

    void start_engine()  {
        cout << "Starting the engine of the car." << endl;
    }

    void displayInfo() {
        cout << "This is a car with " << numWheels << " wheels." << endl;
    }
};

class Motorcycle : public Vehicle {
public:
    Motorcycle() : Vehicle(2) {} 

    void start_engine() {
        cout << "Starting the engine of the motorcycle." << endl;
    }

    void displayInfo()  {
        cout << "This is a motorcycle with " << numWheels << " wheels." << endl;
    }
};

class Truck : public Vehicle {
public:
    Truck() : Vehicle(6) {} 

    void start_engine()  {
       cout << "Starting the engine of the truck." << endl;
    }

    void displayInfo() {
        cout << "This is a truck with " << numWheels << " wheels." << endl;
    }
};

int main() {
    Car myCar;
    myCar.displayInfo();
    myCar.start_engine();

   cout << endl;

    Motorcycle myMotorcycle;
    myMotorcycle.displayInfo();
    myMotorcycle.start_engine();

    cout << endl;

    Truck myTruck;
    myTruck.displayInfo();
    myTruck.start_engine();

    return 0;
}

