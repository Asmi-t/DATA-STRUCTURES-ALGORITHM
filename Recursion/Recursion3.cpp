// given a number n print it's counting
#include <iostream>
using namespace std;

void PrintCount(int n)
{

    //Base case
    if( n == 1)
    {
        cout <<n <<endl;
        return ;
    }
    
   //Recursive Relation
    PrintCount(n-1);

    //Procsessing
    cout <<n <<endl;

   
}


int main()
{
   int n;
   cin >>n;
  
   cout <<endl;

   PrintCount(n);

}
