//Stack is basically last in and first out just like example of plate arranged in stack
#include <iostream>
#include <stack>

using namespace std;

int main()
{
   stack<string>  s;

   s.push("Asmit");
   s.push("Loves");
   s.push("C++");

   cout <<"Size of stack s is -->" <<s.size()<<endl;

   cout << s.top() <<endl;  //last C++ in in s and C++ is first

   s.pop();  //removeing the element at the top which is last in (C++ is deleted)

   cout << s.top() <<endl; 

   s.pop();

   cout <<"Is s empty " <<s.empty()<<endl;

   cout <<s.top() <<endl;

  s.pop();

  cout <<"is s empty " <<s.empty() <<endl;

}

