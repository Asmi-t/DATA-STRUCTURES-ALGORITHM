#include <iostream>
using namespace std;

class book
{
  private :
  int prise;
  string title;

  public:
  string name;
  book(int prise) // Constructor has no return type
  {
    this->prise = prise;
  }

  int getprise(){
    return prise;
  }

};

int main()
{
   book b1(50); //Conatructor book is called when the object is decleared
   b1.name = "The history";
   book b2(40);
   b2 = b1; //Copy constructor is called also called while declearing [ book b2(b1) ]

   cout <<b2.name << endl <<b2.getprise() <<endl;

}