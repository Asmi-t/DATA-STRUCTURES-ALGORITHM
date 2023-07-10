#include <iostream>
using namespace std;



bool CheckPalindrome(string str , int s , int e)
{

    if(s > e)
    {
        return true;
    }
    if(str[s] != str[e])
    {
        return false;
    }
    else{
    s++;
    e--;

    return CheckPalindrome(str , s , e);
    }
}





int main()
{
    string s = "aabbbbaabbbbaa";

    bool b = CheckPalindrome(s , 0 , s.length() - 1);

    if(b)
    {
        cout <<"String is palindrome " <<endl;
    }
    else{
        cout <<"String is not palindrome "<<endl;
    }

}