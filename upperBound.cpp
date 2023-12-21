#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> v = {1,3,4,9};

//    for(int i = 0; i<10; i++)
//     v.push_back(i+3);

   for(int i = 0; i<v.size(); i++)
    cout <<v[i]<<" ";
    cout <<endl;
    int u,l;
   cout <<"Enter the upper bound value"<<endl;
   cin>>u;
   cout <<"Upper BOUND OF " <<u<<" is "<<upper_bound(v.begin(),v.end(),u)-v.begin()<<endl;
   cout <<"Enter the lower bound value"<<endl;
   cin>>l;
   cout<<"Lower bound of "<<l<<" is"<<lower_bound(v.begin(),v.end(),l)-v.begin();

}