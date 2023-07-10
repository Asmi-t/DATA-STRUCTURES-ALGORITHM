// Say each digit of a number
// Eg. ->>  I/o - 412
//          O/P - Four One Two


#include <bits/stdc++.h>
using namespace std;

void SayDigit(int n , string str[])
{
   if(n == 0)
   {
    return ;
   }

   
   int digit = n%10;
   n /= 10;
   SayDigit(n,str);

  
   cout <<str[digit] <<" ";
  

}



int main()
{
   string str[10] = {"Zero" , "One" , "Two" ,"Three" ,"Four" , "Five","Six" ,"Seven" ,"Eight", "Nine"};

   int n;
   cin >> n;

   SayDigit(n , str);

}
