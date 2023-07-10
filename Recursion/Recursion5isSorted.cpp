//check whether any array is sorted or not
//eg1 - arr[] = [2,4,5,6,8,9] is sorted then print it;
//eg2 - arr[] = [3,5,7,8,6,2,,3] is not sorted then print it


#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr ,int size)
{
   if(size == 0 || size == 1) // array is already sorted due to its size
   {
    return true;
   }

   if(arr[0] > arr[1]) //first two element of the  array is not sorted
   {
    return false;
   }
   else   // first two element of the array is sorted
   {
     bool ans = isSorted(arr + 1 , size - 1);    
     return ans;
   }
}


int main()
{
   int arr[] ={3,5,8,6,6,7,8,9};
   int size = 8;

   bool ans = isSorted(arr , size);

   if(ans) 
   {
    cout <<"Array is sorted" <<endl;
   }

   else
   {
    cout <<"Array is not sorted "<<endl;
   }




}