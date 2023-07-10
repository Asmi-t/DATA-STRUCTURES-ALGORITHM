#include <iostream>
using namespace std;

class node
{
  public  :  
    int data;
    node *next;
};

int main()
{
   node n1 , n2;
   n1.data = 50;
   n1.next = &n2;

   n2.data = 30;
   n1.next -> data = 100;//Through n1 i can acces n2
   cout <<n1.data <<" " <<n2.data <<endl; 
}