#include<iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;


    pq.push(6);
    pq.push(4);
    pq.push(2);
    pq.push(7);

    while (!pq.empty())
    {
      int front = pq.top();
      cout <<front <<" ";
      pq.pop();

    }
   
}