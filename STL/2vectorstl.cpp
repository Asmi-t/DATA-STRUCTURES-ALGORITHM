#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;
  
//   takeing input in vector
  v.push_back(2);
  v.push_back(7);
  v.push_back(4);
  v.push_back(3);
  v.push_back(8);    //note -: vector allocate 2  times more block when we insert any element and if there is no space
  
  // Size is showing how 
  cout<<"Size of the vector v -->" <<v.size()<<endl;

 // capacity is showing how much block of memory is allocated
  cout <<"Capacity of the vector v -->" <<v.capacity()<<endl; 

cout <<"Before pop_back"<<endl;
 for(int i:v)
 {
    cout <<i<<" ";
 } cout<<endl;

cout <<"Front element of the vector is " << v.front() <<endl;

cout <<"Last element of the vector is " << v.back() <<endl;

//pop_block is just remove the last element prensent in the vector

v.pop_back();

cout <<"After pop_back "<<endl;

for(int i : v)
{
    cout <<i<<" ";
}cout <<endl;

// clear is only remove the element from vector it,s not delete block
v.clear();

cout <<"After clear "<<endl;
for(int i : v){

  cout <<i<<" ";
} cout <<endl;


// checking that, is size of my vector is zero or not ??
cout <<v.empty()<<endl;

v.push_back(5);
v.push_back(8);

vector<int> b(v); //another intialization method of vector b
            // vector b is equal to v or vector v is copied to b

 cout<<"Printing the vector b" <<endl;
for(auto i : b)
{
    cout <<i <<" ";
} cout <<endl;           

}