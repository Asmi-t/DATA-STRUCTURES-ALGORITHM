/*
  find the prime number between  L and R

   R is  in order of 1000000000
   and 1 <= R - L <=1000000

   Segmented sieve method
   Step 1: --> Create an array of prime number which is till the sqrt(R)

   Step 2 -->  Create an dummy array of size R - L + 1 and mark all the element with 1

   Step 2 -->  Mark 0 in the dummy array if the element of dummy array is multiple of prime number

*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int N = 1000000;
bool sieve[1000001];

void CreateSieve()
{
    for(int i = 2; i <= N; i++)
    {
         sieve[i] = 1;
    }

    for(int i = 2; i*i < N; i++)
    {
       if(sieve[i])
       {
        for(int j = i*i; j <= N; j+=i)
        {
           sieve[j] = 0;
        }
       }
    }


}


vector<int> CreatePrime(int N)
{
    vector<int> prime;
    for(int i = 2; i <= N; i++)
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

int l , r;

cout <<"Enter the left and right number"<<endl;
cin >>l >>r;

//Step 1--> Createing all the prime number till sqrt(R) with the help of sieve array
vector<int> prime = CreatePrime(sqrt(r));

//step 2:--> Createing the dummy array of length l-r+1 and marking all to true(1)
vector<bool>  DummyArray(l-r+1 , 1);

//step 3 --> Mark all the number in the dummy array which is multiple of prime to be false(0)
for(auto pr : prime)
{
    int startIndx = (l/pr)*pr;
    if(startIndx < l)
    {
        startIndx = startIndx + pr;
    }

    for(int i = max(startIndx,pr*pr); i <= r; i+= pr )
    {
      DummyArray[i-l] = 0;
    }
}

//Print the prime number

for(int i = 0; i<l-r+1; i++)
{
    if(DummyArray[i])
    {
        cout <<i+l<<" ";
    }
}

}