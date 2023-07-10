// map is in the form of    key - value
// map is also sorted
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int , string> m;

    m[1] = "Asmit";
    m[10] = "Loves";
    m[3] = "C++";

    m.insert( {5 , "Bheem"});   // equal to  m[5] = "Bheem";    another method to initialize

    for(auto i : m)
    {
        cout <<i.first <<" "<<i.second <<endl;
    }cout <<endl;

   cout <<"IS 10 PRESENT ==> " << m.count(10)<<endl;

   m.erase(3); //element at key 3 is removed

   for(auto i : m)
   {
    cout <<i.first <<" " <<i.second <<endl;
   }

   auto it = m.find(5);

   for(auto i = it; i != m.end(); i++)
     {
        cout <<(*i).first<<" ";
     }cout <<endl;

}