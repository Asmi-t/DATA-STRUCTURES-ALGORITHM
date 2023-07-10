#include <iostream>
using namespace std;

class book
{
   public : 
   string name;
   int prise; 

   ~book()
   {
      cout <<"Destructor Executed " <<endl;
   }

};

int main()
{
    cout <<endl;
    
    book b2;//In stack

    book *b1 = new book(); //In heap memory
    
    delete b1; // for Heap memory we have to call destructor manually
    cout <<"Hello students" <<endl;

   //For stack memory destructor is execute when control goes out of scope
}