#include <iostream>
using namespace std;

class book
{
   public : 
   int prise;
   string name;
   string title;

};


int main()
{
   book *b1 = new book; // dynamically decleared variable b1 of type book
   b1->prise = 50; // equivalant to(*b1).prise =  50
   
   cout <<endl;
   cout <<b1->prise<<endl;
}