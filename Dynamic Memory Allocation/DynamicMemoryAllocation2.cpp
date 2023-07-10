#include <iostream>
using namespace std;

int main()
{
   
int *arr = new int[5]; //ARR IS AN ARRAY OF TYPE INTEGER OF SIZE 5 IN HEAP MEMORY

cout <<"Please enter five input to the array" <<endl;

for(int i = 0 ;i < 5; i++)
{
    cin >>arr[i];
}

for(int i = 0 ;i < 5; i++)
{
    cout <<arr[i];
}



    
}