#include <iostream>
using namespace std;

class A{
    int x;
    int y;
    int z;

public:
    A(int a = 30, int b = 40, int c = 50){
        x = a;
        y = b;
        z = c;
    }

   
    void show()
    {
       cout <<x <<" " <<y <<" " <<z <<endl;
    }

};

int main()
{
    A a1();
    a1.show();
}