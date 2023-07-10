//Find the factorial of given number  n will be given  find n!




#include <iostream>
using namespace std;

int factorial(int n)
{
    //Base case
    if(n == 0)
    {
        return 1;
    }

    //Recursive Relation
    return n * factorial(n-1);
    
}

int main()
{
  int n;
  cin >>n;

  int ans = factorial(n);

  cout <<ans;

}