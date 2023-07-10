#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int & b = a;
    //Createing a reference variable
                 
    // now b can be use at the place of a
   // i.e b is another name of a

    cout <<b<<endl;
}