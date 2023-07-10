#include <iostream>
using namespace std;


void mearge(int *arr , int s , int e)
{
    int mid = s + (e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int* first = new int[len1];
    int* second = new int[len2];

    int mainArrayIndx = s;
    for(int i = 0; i<len1 ; i++)
    {
        first[i] = arr[mainArrayIndx++];
    }

    mainArrayIndx = mid + 1;
    for(int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndx++];
    }

    int i = 0 , j = 0;
    mainArrayIndx = s;
    while(i < len1 && j < len2)
    {
        if(first[i] < second[j])
        {
           arr[mainArrayIndx++] = first[i++];
        }
        else{
            arr[mainArrayIndx++] = second[j++];
        }
    }
    
    while(i < len1)
    {
        arr[mainArrayIndx++] = first[i++]; 
    }

    while(j < len2)
    {
        arr[mainArrayIndx++] = second[j++];
    }

}


void meargeSort(int *arr , int s , int e)
{
  //base case
  if(s >= e)
  {
    return ;
  }
  int mid = s + (e-s)/2;
  
  cout  <<"S-- " <<s <<" E --" <<e <<endl;
  //Sorting left side
  meargeSort(arr , s , mid); 
     

  //Sorting right side
  meargeSort(arr , mid+1 , e);

  //Mearge two sorted array
  mearge(arr , s , e);   
}

int main()
{
    int arr[] = {2,4,5,9,9,5,2,0};

    meargeSort(arr ,  0 , 7);

    for (int i = 0; i < 8; i++)
    {
        cout <<arr[i] <<" " ;
    }
}