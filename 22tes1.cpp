#include <iostream>
#include <string>

using namespace std;

char toLower(char ch)
{
    if('a' <= ch && ch <= 'z')
    {
        return ch;
    }
    else
    {
        return (ch - 'A' + 'a');
    }
}

int main()
{
    char ch;

    cin >>ch;
    cout <<toLower(ch) <<endl;


}