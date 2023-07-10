#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool isPossible(int m , int n , vector<int> arr , int mid)
{
  int sum = 0;
  for(int i = 0; i<n; i++)
  {
    if(arr[i] < mid)
    {
        continue;
    }
    else{
    sum = sum + (arr[i] - mid);
     }
  }
  if(sum >= m)
   {
    return true;
   }
   else
   {
    return false;
   }

}

int main()
{
    int m , n;
    cin >>n;
    cin >>m;

    vector<int> arr;

    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >>temp;
        arr.push_back(temp);
    }

    sort(arr.begin() , arr.end());

    int min = arr[0];
    int max = arr[n-1];
    int mid = min + (max - min)/2;
    int ans = -1;
    while(min <= max)
{
    if(isPossible(m , n , arr , mid))
    {
        ans = mid;
        min = mid + 1;
    }
    else
    {
        max = mid - 1;
    }
    mid = min + (max - mid)/2;
}
 cout <<ans;

}