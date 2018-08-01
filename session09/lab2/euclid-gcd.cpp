// euclid-gcd.cpp

#include "stdafx.h"

using namespace std;

int GCD(int a, int b)
{
    if(a < b)
        swap(a, b);

    int aMinusB = a - b;

    while(aMinusB > 0)
    {
        if(aMinusB > b)
        {
            a =
        }
        else
        {
            a =
            b =
        }
        aMinusB = a - b;
    }

    return b;
}

int main()
{
    int a = 231;
    int b = 182;

    cout << "The GCD of " << a
         << " and " << b << " = "<<
         GCD(a,b) << endl;

    return 0;
}
