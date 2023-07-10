#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> v;

    cout <<"Enter the number of rows" <<endl;
    cin >>n;

    int **arr = new int*[n];

    int x = n;
    while(x--)
    {
      int m;  
      cout <<"Enter the size of the " <<n-x <<"th row" <<endl;
      cin >>m;
      v.push_back(m);
      arr[n-(x+1)] = new int[m];
    }

  cout <<"Enter the elements "<<endl;
   for(int i = 0; i<n; i++)
   {
    for(int j = 0; j<v[i]; j++)
    {
        cin >>arr[i][j];
    }
   }

cout <<" Printing the  gagged array............ "<<endl;
  for(int i = 0; i<n; i++)
   {
    for(int j = 0; j<v[i]; j++)
    {
        cout <<arr[i][j] <<" ";
    }
    cout <<endl;
   }
}