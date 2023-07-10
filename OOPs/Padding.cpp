#include<iostream>
using namespace std;

class book{
   
   int price;   // 4 byte
   char set;    // 1 byte + 3 byte padding

};

int main()
{
  book b1;
  cout <<sizeof(b1) <<endl;
}