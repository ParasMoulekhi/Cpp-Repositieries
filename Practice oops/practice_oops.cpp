#include <iostream>
using namespace std;

class vehicle
{
public:
    int milege;
    string Model;
    int engine;
};
int main()
{
    // Create object statically

    vehicle Car;
    Car.milege = 10;
    Car.Model = "TATA";
    Car.engine = 2000;

    // Create object dynamically

    vehicle *Bus = new vehicle;
    (*Bus).milege = 11;
    (*Bus).Model = "Mahindra";
    (*Bus).engine = 1200;
}