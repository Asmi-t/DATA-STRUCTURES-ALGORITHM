#include <iostream>
using namespace std;

void reverse(string &str, int s , int e)
{
  //Base cse
  if(s >= e)
  {
    return ;
  }
   
  swap(str[s] , str[e]);
  s++;
  e--;
 // recursive relation
  reverse(str , s, e);

  
}


int main()
{
    string s ="Krishna";

    reverse(s , 0 , 6);
 
    cout <<endl;
    cout <<s;
}