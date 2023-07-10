#include <iostream>

using namespace std;

bool ispresent(int arr[][4],int m ,int n , int target)
{
    for(int i = 0; i < m; i++)
   {
     for(int j = 0; j < n; j++)
     {
          if(arr[i][j] == target)
          {
            return true;
          }
     }
   }
   return false;;
}

int main()
{
    //method of initialization of 2d arary
   // int arr[3][4] = { {2,3,5,12}, {5,3,7,15}, {2,4,8,14}};
   // int arr[3][4] = {2,3,4,6,3,5,3,1,6,8,0,5};

    int arr[3][4];
    cout <<"Enter the elements" <<endl;
    
    for(int i = 0; i < 3; i++)   
    {
      for(int j = 0; j < 4; j++)
      {
        cin >>arr[i][j];   //takeing input row wise
      }
    }


    int target;
    cout <<"Enter the element you want to find" <<endl;
    cin >>target ;
    if(ispresent(arr , 3 ,3 , target))
    {
        cout <<"Found";
    }
    else{
        cout <<"Not Found";
    }
}