#include <iostream>
using namespace std;

class book
{
    public :
    string name;
    int prise ;

     int discount(int n)
    {
        return n*(1/10);
    }

   
};

int main()
{
     book b1 ;

    int n  = b1.discount(567);
    cout <<n <<endl;
}