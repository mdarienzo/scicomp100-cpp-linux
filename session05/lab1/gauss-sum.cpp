// gauss-sum.cpp

#include "stdafx.h"

using namespace std;

int main()
{
    double n = 1000;

    double sumByLooping = 0;

    for ( )
    {                                       //Run the loop from k = 1
        sumByLooping = sumByLooping + k;    //While k is less than or equal to n
    }                                       //Adding 1 to k each time

	cout.imbue(std::locale(""));

    cout << "Manual sum of first " << n
         << " natural numbers = "
         << sumByLooping << endl;

    double sumByGauss = 0;

    cout << "Gaussian sum of first " << n
         << " natural numbers = "
         << sumByGauss << endl;

    return 0;
}
