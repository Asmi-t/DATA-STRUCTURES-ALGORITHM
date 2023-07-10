#include <iostream>
using namespace std;

void SelectionSort(int *arr , int n , int i)
{
    if(n == 0 || n == 1)
    {
        return ;
    }
    if(i == n-1)
    {
        return ;
    }

    int temp = i;

    for(; i >= 0; i--)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i] , arr[i+1]);
        }
    }

 i = temp + 1;
 SelectionSort(arr, n , i);

}


int main()
{
   int arr[] = {1,5,6,4,3,0,1};
   SelectionSort(arr , 7 , 0);

   for(int i = 0; i<7; i++)
   {
    cout <<arr[i] <<endl;
   }
}