#include <iostream>
#include <cstring>
using namespace std;

class book
{
  private :
  int prise;

  public:
  char* name;
 
book()
{

}

//Default copy constructor
//  book(book &b)
//  {
//     cout <<"Default constructor called" <<endl;
//     char* ch = new char[strlen(b.name) + 1];  //Deep copy
//     // ch = b.name;                           // :    :
//     strcpy(ch , b.name);       
//     name = ch;                          // :    :  
//  }

  //Setter to set the values in main
 
  void setPrise(int prise)
  {
    this->prise = prise;
  }

  void setName(char *name)
  {
    this->name = name;
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
   
   b1.setName(bname);
   b1.setPrise(50);
   b1.printInfo();

   book b2(b1); //Copy constructor is called
               // here b1 and b2 both are pointig to the same location of memory          
   b1.name[4] = 'D';

   b1.printInfo();
   b2.printInfo();

}