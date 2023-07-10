// Search if 3 is present in arr[] = [2,4,5,4,5,2,,3,6,6]
//return true
#include <iostream>
using namespace std;

bool BinarySearch(int *arr,int s ,int e, int key)
{
    if(s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;
    if(arr[mid] == key)
    {
        return true;
    }
    if(arr[mid] < key)
    {
        return BinarySearch(arr , mid + 1, e ,key);
    }

    else{
        return BinarySearch(arr , s , mid-1, key);
    }
}


int main()
{
    int arr[] ={3,5,7,8,5,3,5};
    int size = 7;
    int key = 8;

    bool ans = BinarySearch(arr , 0 , size-1 , key);

    if(ans)
    {
        cout <<"Yes key is present" <<endl;
    }
    else{
        cout <<"No element is not present" <<endl;
    }

}
