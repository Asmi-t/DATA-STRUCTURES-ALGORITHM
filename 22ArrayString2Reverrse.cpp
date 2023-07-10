#include <iostream>
using namespace std;

void Reverse(char arr[] ,int n)
{
    int s = 0 ,e = n - 1;
    while(s <= e)
    {
        swap(arr[s++] , arr[e--]);
    }
}

int length(char arr[])
{
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[20];
    cout<<"Enter your name"<<endl;
    cin >>arr;

    cout<<"Your Name is "<<arr <<endl;
  
    int n = length(arr); 
    Reverse(arr , n);
    cout<<"Reverse is "<<arr <<endl;
}
