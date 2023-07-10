/*
 print the following pattern

 ****
 *  *
 *  *
 *  *
 ****

*/

#include <iostream>
using namespace std;

int main()
{
    int row , col ;
     cin >> row >> col;

    int i = 1;
    
    while(i <= col)
    {
     cout <<"*";
     i++;
    }
    cout <<endl;
   
    i = 1;

    while(i <= row - 2)
    {
        int j = 1;
        while(j <= 1)
        {
            cout <<"*";
            j++;
        }

        j = 1;

        while(j <= col - 2)
        {
            cout <<" ";
            j++;
        }

        j = 1;
        while(j <= 1)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout <<endl;
    }

  i = 1;
  while(i <= col)
  {
    cout<<"*";
    i++;
  }

}
