/*
Print the following

**********
****  ****
***    ***
**      **
*        *
**      **
***    ***
****  ****
**********

*/

#include <iostream>
using namespace std;

int main()
{
    int row = 5 , col = 10;
    int i = 1;
    while(i <= row)
    {
        int j = 1;
        while(j <= row - i + 1)
        {
            cout <<"*";
            j++;
        }

        j = 1;
        while(j <= col - 2*(row - i + 1))
        {
            cout <<" ";
            j++;
        }

       j = 1;
       while(j <= row - i + 1)
       {
        cout <<"*";
        j++;
       }
         cout <<endl;
       i++;
    }


   i = 1;

   while(i <= row)
   {
    int j = 1;
    while(j <= i)
    {
        cout <<"*";
        j++;
    }

   j = 1;
   while(j <= col - 2*i)
   {
    cout <<" ";
    j++;
   }

   j = 1;
   while(j <= i)
   {
    cout <<"*";
    j++;
   }
    cout <<endl;
    i++;
   }

}