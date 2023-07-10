#include <iostream>
using namespace std;

int main()
{
    int a[4][3];
    cout <<"Enter the elements " <<endl;
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

   cout <<"Sum of rows are " <<endl;
     for(int i = 0; i < 4; i++)
    {
        int sum = 0;
        for(int j = 0; j < 3; j++)
        {
            sum =  sum + a[i][j];
        }
        cout << sum <<endl;
    }

    cout << "Sum of colums are " <<endl;

 for(int j = 0; j < 3; j++)
    {
        int sum = 0;
        for(int i = 0; i < 4; i++)
        {
            sum =  sum + a[i][j];
        }
        cout << sum <<endl;
    }

}
