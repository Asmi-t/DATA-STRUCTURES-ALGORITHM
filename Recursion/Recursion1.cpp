// Print  the power of two 2^n  Take n as an input




#include <iostream>
using namespace std;


int Poweroftwo(int n)
{
    //Base Case
    if(n == 0)
    {
        return 1;
    }

    return 2 * Poweroftwo(n-1); //Recursive Relatioin
}


int main()
{
     int n;
     cin >>n;

     int ans = Poweroftwo(n);

     cout <<ans;
}