#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(4);
    q.push(7);

    cout <<q.front() <<endl;
    q.pop();

    if(q.empty())
    {
        cout <<"Queue is empty" <<endl;
    }
    else
    {
        cout <<"Queue is not empty" <<endl;
    }

    cout <<q.front() <<endl;
    q.pop();
    if(q.empty())
    {
        cout <<"Queue is empty" <<endl;
    }
    else
    {
        cout <<"Queue is not empty" <<endl;
    }


     
}