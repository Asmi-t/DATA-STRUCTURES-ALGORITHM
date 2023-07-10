//  Return the sum of the array

#include <iostream>
using namespace std;

int sum(int *arr , int size)
{
    if(size == 0)
    {
        return 0;
    }
 
    if(size == 1)
    {
        return arr[0];
    }

    else{
      int ans = arr[0] + sum(arr+1 , size - 1);
      return ans;
    }
     
}


int main()
{
    int arr[] = {3,15,5,3,2};
    int size = 5;

    int ans = sum(arr , size);

    cout <<"Sum is "<<ans;

}