#include <iostream>
using namespace std;

void sieve(bool *prime)
{
    //Setting true for every number
    for(int i = 2; i<1000; i++)
    {
        prime[i] = true;
    }

    for(int i = 2; i<1000; i++)
    {
        if(prime[i])
        {
            for(int j = 2*i; j<1000; j+=i)
            {
                prime[j] = false;
            }
        }
    }
}

int main()
{
    bool prime[1000];;
    
    sieve(prime);

    cout <<"All prime number less than 1000 are below | "<<endl;

    for(int i = 2; i<1000; i++)
    {
        if(prime[i])
        {
            cout <<i << endl;
        }
    }

}