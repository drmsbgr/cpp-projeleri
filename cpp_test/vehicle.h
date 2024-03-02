#include <string>

using namespace std;

class Vehicle
{
private:
    string manufacturer;
    int year;
    string color;

public:
    string getManufacturer()
    {
        return manufacturer;
    }

    void setManufacturer(string value)
    {
        manufacturer = value;
    }

    int getYear()
    {
        return year;
    }

    string getColor()
    {
        return color;
    }
    Vehicle(/* args */);
    ~Vehicle();
    void start()
    {
    }
    void stop()
    {
    }
    void drive()
    {
    }
};

Vehicle::Vehicle(/* args */)
{
}

Vehicle::~Vehicle()
{
}
