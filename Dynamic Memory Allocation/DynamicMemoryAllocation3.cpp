//Createing a 2d array in heap memory

#include <iostream>
using namespace std;

int main()
{
    int n ,m;

    cout <<"Enter the row and column of a matrix" <<endl;
    cin >>n >>m;
    
    int **arr = new int* [n]; //arr is pointer of pointers of n size 

    for(int i = 0; i<n; i++) 
    {
        arr[i] = new int[m]; // adding array for each n while traverseing
    }

   cout <<"Enter the elements of the matrix" <<endl;
   cout <<"Row and column is " <<n <<" and "<<m <<endl;

   for(int i = 0; i <n; i++)
   {
     for(int j = 0; j<m; j++)
     {
        cin >> arr[i][j];
     }
     
   }

  cout <<"Printing ......" <<endl;

   for(int i = 0; i <n; i++)
   {
     for(int j = 0; j<m; j++)
     {
        cout <<arr[i][j] <<" ";
     }
     cout <<endl;
   }

   for(int i = 0; i<n; i++)
   {
    delete [] arr[i];  //Creareing each n arrray from heap memory
   }

 delete []arr;
}