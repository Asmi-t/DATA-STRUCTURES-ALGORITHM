//queue follow first in first out   

#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<string> q;

    q.push("Asmit");
    q.push("Loves");
    q.push("Calculus");

    cout <<q.front() <<endl;

    q.pop(); //Asmit is first so it is deleted in queue
    cout <<q.front()<<endl;

    cout <<q.empty() <<endl;

    cout <<"Size of the queue is " <<q.size() ;

}