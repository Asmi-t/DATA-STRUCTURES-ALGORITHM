#include <iostream>
using namespace std;

class human
{
   public :
   string color;
   int hight;
   int weight;
   
   void print()
   {
    cout <<"Color is " <<color <<endl;
    cout <<"Height is " <<hight <<endl;
    cout <<"Weight is "<<weight <<endl;
   }
};



class man : public human //man has inherited the propertis of human
{
 
};

int main()
{
  man m1;
  m1.hight = 5;
  m1.weight = 70;
  m1.color = "Brown";

  m1.print();
  
}