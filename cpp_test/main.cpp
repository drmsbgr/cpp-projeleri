#include <iostream>
#include <string>
#include "vehicle.h"
#include "car.h"

using namespace std;

int main()
{
    Vehicle v1 = Vehicle();

    v1.setManufacturer("mercedes");

    cout << v1.getManufacturer();

    getchar();
    return 0;
}