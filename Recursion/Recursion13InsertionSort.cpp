l#include <iostream>
using namespace std;

void InsertionSort(int *arr , int q , int n)
{
    if(n == 0 || n == 1)
    {
        return ;
    }

    if(q == n)
    {
        return ;
    }

    int i;
    int temp = arr[q];
   
    for( i = q-1; i >= 0; i--)
    {
        if(arr[i] > temp)
        {
            arr[i+1] = arr[i];
        }
        else{
            break;
        }
    }
    arr[i+1] = temp;
    InsertionSort(arr , q+1 , n );
    
}


int main()
{
    int arr[] = {2,4,56,9,4,2};
    InsertionSort(arr , 1 , 6 );

    for(int i = 0; i<6; i++)
    {
        cout <<arr[i] <<endl;
    }
}