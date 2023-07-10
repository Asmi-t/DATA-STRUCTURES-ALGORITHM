#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_front(5);
    dq.push_front(3);
    
    cout <<dq.front() <<endl;
    cout <<dq.back() <<endl;
    dq.pop_back();  //dq.pop_font() for deleting front element
    cout <<dq.front() <<endl;
    dq.pop_front();
    if(dq.empty()) {cout <<"Dqueue is empty"<<endl;}
    else {cout <<"Dqueue is not empty"<<endl;}
}