#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string , int> mp;

    mp["Asmit"] = 1;
    mp["Raj"]   = 2;
    mp["Shrivastava"] = 3;
    mp["Loves"]       = 4;
    mp["Krishna"]     = 5;

    mp["Loves"] = 20;
    cout <<mp["Loves"]<<endl;

    // cout <<mp["krishna"]<<endl;
    // mp.erase("Raj");
    cout <<mp.at("Raj")<<endl;

    cout <<mp.count("krishna")<<endl;
    // cout <<mp.at("krishna")<<endl;

    //Iterator
    // for(auto i : mp)
    // {
    //     cout <<i.first <<" "<<i.second <<endl;
    // }

    
}