#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int N = 1000000; 
bool sieve[1000001];
void CreateSieve()
{
    for(int i = 2; i<=N; i++)
    {
        sieve[i] = 1;
    }
    
    for(int i = 2; i*i <= N; i++ )
    {
        for(int j = i*i; j<=N; j+=i)
        {
            sieve[j] = 0;
        }
    }
}

vector<int> generatePrime(int n)
{
    vector<int> prime;
    for(int i = 2; i<=n; i++)
    {
        if(sieve[i])
        {
            prime.push_back(i);
        }
    }
    
    return prime;
}


int main()
{
    CreateSieve();
    int a ,b;
    cin >> a >>b;
    
    //step-1 generate an array of prime number till sqrt(b)
    
    vector<int> prime = generatePrime(sqrt(b));
    
    //step-2 create a dummy array of size b-a+1 size and mark all the elementes to 1
    
    vector<bool> dummyArray(b-a+1 , 1);
    //step-3 mark the multiple of prime to be false in dummy array
    
    for(auto pr : prime)
    {
        int firstIndx = (a/pr) * pr;
        if(firstIndx < a)
        {
            firstIndx = firstIndx + pr;
        }
        
        for(int i = max(firstIndx , pr*pr); i <= b; i+=pr)
        {
            dummyArray[i-a] = 0;
        }
    }
    
    for(int i = a; i <= b; i++)
    {
        if(dummyArray[i-a])
        {
            cout <<i<<endl;
        }
    }
    
    
}