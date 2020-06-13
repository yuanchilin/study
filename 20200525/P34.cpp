#include <iostream>
using namespace std;
int Vac = 3;
int main()
{
    int Vac = 10;
    ::Vac++;
    cout << ::Vac << endl;
    cout << Vac << endl;
    return 0;
}