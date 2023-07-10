// Note -: Set stl is sorted and and having unique element
// for takeing inpue for vector, deque , list  use push_back();
// for stack , queue and priority_queue use push();
// for set and map use insert
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(9);
    s.insert(0);
    s.insert(9);
    s.insert(9);
    s.insert(3);

    for(auto i : s)
    {
        cout << i <<" ";
    }cout<<endl;

    set<int> :: iterator it = s.begin();
    it++;
    s.erase(it);

    for(auto i : s)
    {
        cout<<i<<" ";
    }cout <<endl;

    cout <<"IS 5 PRESENT IN SET s --> "<< s.count(5) <<endl; 

   //s.find(4)  gives us the first index of set s where 4 is present

   set<int> :: iterator itr = s.find(4);
   for(auto i = itr; i != s.end(); i++)
     {
        cout <<*i<<" ";
     } cout<<endl;


}