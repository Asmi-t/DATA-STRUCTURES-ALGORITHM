#include <iostream>
using namespace std;

int length(char ar[])
{
    int count = 0;
    for(int i = 0; ar[i] != '\0'; i++ )
    {
       count++;
    }
    return count;
}

int main()
{
    char ar[50];
    cout <<"Enter your name"<<endl;
    cin >>ar;

   
    cout <<"Your name is " <<ar <<endl;
    cout <<"Length of your name is " <<length(ar)<<endl;

}