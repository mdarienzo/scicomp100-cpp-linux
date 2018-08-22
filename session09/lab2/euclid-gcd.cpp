// euclid-gcd.cpp

#include "stdafx.h"

using namespace std;

int GCD(int a, int b)
{
    if(a < b)
        swap(a, b);

    int difference = a - b;

    while(difference > 0)
    {
        if(difference > b)
        {
            a =
        }
        else
        {
            a =
            b =
        }
        difference = a - b;
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
