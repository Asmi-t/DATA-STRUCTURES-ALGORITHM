// Search if 3 is present in arr[] = [2,4,5,4,5,2,,3,6,6]
//return true
#include <iostream>
using namespace std;

bool LinearSearch(int *arr,int size, int key)
{
    
     if(arr[0] == key)
    {
        return 1;
    }
    
    if(size == 0)
    {
        return 0;
    }

    bool ans = LinearSearch(arr+1 , size-1 , key );
    return ans;

}


int main()
{
    int arr[] ={3,5,7,8,5,3,5};
    int size = 7;
    int key = 3;

    bool ans = LinearSearch(arr , size , key);

    if(ans)
    {
        cout <<"Yes key is present" <<endl;
    }
    else{
        cout <<"No element is not present" <<endl;
    }

}
