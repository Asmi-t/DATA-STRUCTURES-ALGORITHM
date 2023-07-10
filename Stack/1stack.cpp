#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(99);
    s.push(277);

    s.pop();
    cout <<"Peak element of stack is " <<s.top() <<endl;

   if(s.empty())
   {
    cout <<"Stack empty hai jii " <<endl;
   }
   else
   {
    cout <<"Kuch to hai stack me " <<endl;
   }
   
}