#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int ,5> arr = {1,2,3,5,9};
   
    cout <<"Size of arr -->" << arr.size() <<endl;   
    int size = arr.size(); //size of the array

    for(int i : arr)
    {
        cout <<i<< " " ;
    } cout <<endl;
    
    // array at inidex 3
    cout <<arr.at(3) <<endl;
  

    cout <<"front element of the array "<<arr.front()<<endl;
    cout <<"Last element of the array "<<arr.back();

}