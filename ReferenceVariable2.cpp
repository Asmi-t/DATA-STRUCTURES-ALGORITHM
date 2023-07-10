#include <iostream>
using namespace std;

void update(int &x)
{
  x++;
 
}


int main()
{
    int a = 5;

    update(a);

    cout << a <<endl;
}