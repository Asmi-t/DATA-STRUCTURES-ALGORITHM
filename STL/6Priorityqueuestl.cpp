//there are two priority queue   1. maximum priority queue  2. minimum priority queue

#include <iostream>
#include <queue>

using namespace std;
int main()
{ 
    //max
    priority_queue<int> maxi;

    //min
    priority_queue<int , vector<int>  , greater<int> > mini;

   maxi.push(4);
   maxi.push(6);
   maxi.push(7);
   maxi.push(2);

int n = maxi.size();

  for(int i = 0; i < n; i++)
    {
        cout <<maxi.top() <<" ";
        maxi.pop();
    } cout <<endl;


  mini.push(5);
  mini.push(3);
  mini.push(9);
  mini.push(1);

   n = mini.size();
  for(int i = 0; i < n; i++)
   {
    cout <<mini.top()<< " ";
     mini.pop();
   } cout <<endl;

 cout <<"IS mini empty " << mini.empty()<<endl;

}