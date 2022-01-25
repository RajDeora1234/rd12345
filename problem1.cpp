#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main()
{
    long double n = 121;
    long double m;

    while (1 + n != 1)
    {
        m = n;
        n = n / 2;
    }
    cout << "machine precession of my personal computer is-> " << m << endl;
    cout << "and the value of n is " << n << endl;

    return 0;
}