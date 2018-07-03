// reverse-string.cpp

#include "stdafx.h"

using namespace std;

string ReverseString(string original)
{
    string reversed;

    for( )
        reversed +=

    return reversed;
}

int main()
{
    string original = "Forever Young";
    string reversed = ReverseString(original);

    cout << "Original string = "
         << original << endl;

    cout << "Reversed string = "
         << reversed << endl;

    reverse(original.begin(),original.end());

    cout << "  STL reverse() = "
         << original << endl;

    return 0;
}
