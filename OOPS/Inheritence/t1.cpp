// C++ program to explain
// multiple inheritance
#include <iostream>
using namespace std;

// first base class
class Vehicle {
    protected:
    int a = 32;
    public:
       void FuncVehicle() 
        { cout << "This is a Vehicle\n",a; }
};

// second base class
class FourWheeler:public Vehicle {
public:
	FourWheeler()
	{
		cout << "This is a 4 wheeler Vehicle\n";
	}
};

// sub class derived from two base classes
class Car : public FourWheeler {
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes.
	FourWheeler obj;
    obj.a;
	return 0;
}
