#include <iostream>
using namespace std;


long long power( long long a , long long b)
{
    if(b == 0)
    {
        return 1;
    }
    if(b == 1)
    {
        return a;
    }

    if(b % 2 == 0)
    {
        return power(a  , b/2) * power(a , b/2);
    }
    else
    {
        return a*power(a , b/2)*power(a , b/2);
    }
}

int main()
{
    long long a , b;
    cin >>a  >> b;

    cout <<power(a , b) <<endl;
}