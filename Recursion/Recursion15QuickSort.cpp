/* Quick Sort
   1. Select pivot index
   2. place at right position  
    (count all the lesser element after pivot, pivotIndex = start + count)
   3.make sure that all the element before pivotindex is lesser than pivot
      and after pivotindex is greater than pivot
   4.similarly sort the left array(before pivotIndex) 
     and right array(after pivotIndex)   [Recursive call]

*/



#include <iostream>
using namespace std;

int partion(int *arr , int s , int e)
{
    //  Finding pivotindex and placeing first element at pivotIndex
    int count = 0;
    for(int i = s+1; i <=e; i++)
    {
        if(arr[i] < arr[s])
        {
            count++;
        }
    }

    int pivotIndex = s + count;

    swap(arr[s] , arr[pivotIndex]);

    //Make sore that all elements in the left(before pivot)  are smaller
   // and all the right elements (after pivotIndex) are larger  

   int i = s ,  j = e;
   
   while(i < pivotIndex && j > pivotIndex)
    {
       while(arr[i] < arr[pivotIndex])
       {
        i++;
       }

       while(arr[j] > arr[pivotIndex])
       {
        j--;
       }

       swap(arr[i++] , arr[j--]);
    } 
    
    return pivotIndex;
}




void QuickSort(int* arr , int s , int e)
{
  //Base case
  if(s >= e)
  {
    return ;
  }

  //Find pivotIndex and make sure all the left elements is small and right elements are larger than pivot
  int p = partion(arr , s , e);

// sorting left elements
QuickSort(arr , s , p-1);

//Sorting right elements
QuickSort(arr , p+1 , e);

}    


int main()
{
   int arr[] ={1,3,9,7,5,3,2};
   int n = sizeof(arr) / sizeof(int) - 1;
   
   QuickSort(arr , 0 , n);

   for(int i = 0; i<=n; i++)
   {
    cout <<arr[i] <<"  ";
   }     
}