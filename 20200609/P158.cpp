#include <iostream>
#include <typeinfo>
using namespace std;

class classFushu
{
    public:
    classFushu() { shibu = xubu = 0}
    classFushu(double r, double i)
    {
        shibu = r, xubu = i;
    }
    classFushu operator + (const classFushu&c);
    class
    
};