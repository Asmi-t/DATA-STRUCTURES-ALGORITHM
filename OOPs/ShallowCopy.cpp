#include <iostream>
using namespace std;

class book
{
  private :
 
  string title;

  public:
  int prise;
  string name;
  void SetPrise(int prise)
  {
    this->prise = prise;
  }

  int getprise(){
    return prise;
  }
  
  void printInfo()
  {
    cout <<"Name => " << this->name <<endl << "Prise => " << this->prise <<endl;
  }
};

int main()
{
   book b1; //Conatructor book is called when the object is decleared
   char bname[13] = "the history";
   
   b1.name = bname;
   b1.prise = 50;
   b1.printInfo();

   book b2(b1); //Copy constructor is called
               // here b1 and b2 both are pointig to the same location of memory
   b1.name[4] = 'D';

   b2.printInfo();
}