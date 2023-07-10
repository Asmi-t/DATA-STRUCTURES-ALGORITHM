#include <iostream>
using namespace std;

class book
{
  private :
  int prise;
  string name;
  string title;

  public:
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
   cout <<b1.getprise()<< endl;  

}