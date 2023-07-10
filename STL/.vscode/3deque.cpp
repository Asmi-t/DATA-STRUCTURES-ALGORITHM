#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(3);
    d.push_back(4);
    d.push_back(6);
    d.push_back(9);
    d.push_back(19);

    cout <<"Size of the deque d is --->" <<d.size() <<endl;
   
    for(auto i : d)
    {
        cout << i <<" ";
    }  cout<<endl;
    cout <<"Element at index t = 3 -->" <<d.at(3)<<endl;
    
    cout <<"Front element in deque is -->" << d.front() <<endl;
    cout <<"last element in deque is --->" << d.back() <<endl;

    cout <<"Is the size of my deque empty  --> " <<d.empty() <<endl;

    d.erase(d.begin(), d.begin() + 1 );

    cout <<"After eraseiing the deque from begin to begin +1" <<endl;

    for(auto i : d)
     {
        cout <<i <<" ";
     }cout <<endl;

  //inserting the element 1 at the front of deque d
   d.push_front(1);

  //insertinf the element 22 at the back(last) of deque d
  d.push_back(22);
   
   cout <<"After entering the element 1 at the front and 22 at the back of deque d"<<endl;

   for(auto i : d)
   {
    cout <<i<<"  ";
   }cout <<endl;

 //Remove the element at the front of the deque d
 d.pop_front();

 //Removeing the element at the end of the deque d
 d.pop_back();

cout <<"After removeing first and last element in deque " <<endl;
 for(auto i : d)
 {
    cout <<i<<" ";
 } cout <<endl;  

}