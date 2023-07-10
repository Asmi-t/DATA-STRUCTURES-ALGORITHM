#include <iostream>
#include <list>

using namespace std;
int main()
{
    list<int> l;

    l.push_back(3);
    l.push_back(6);
    l.push_front(2);
    l.push_back(1);

    for(int i : l)
    {
        cout <<i <<" ";
    } cout<<endl;

   l.pop_back();  //removing the last element from list l
   l.pop_front();  // removeing the first element from list l

   cout <<"After removeing the first element and last element 1 times" <<endl;

   for(auto i : l)
   {
     cout <<i<<" ";
   } cout <<endl;

   l.erase(l.begin());  //eraseing the first element of remaining list
   
   cout <<"After eraseing the first element of remaining list"<<endl;

   for(auto i : l)
   {
    cout <<i <<" ";
   }cout <<endl;

// three methods for initializing  list


//M1


list<int> l2;

l2.push_back(4);
l2.push_front(6);
l2.push_back(8);

cout <<"Printing l2"<<endl;
for(auto i : l2)
{
    cout <<i<<" ";
}cout <<endl;


//M2
list<int> l3(l2);    //l2 is copied to l3

cout <<"Printing l3"<<endl;
for(auto i : l3)
{
    cout <<i<<" ";
}cout <<endl;

// M3

list<int> l4(5 , 100);   // l3 hace five elements and all elements is initilize to 100

cout <<"Printing l4"<<endl;
for(auto i : l4)
{
    cout <<i<<" ";
}cout <<endl;



}
