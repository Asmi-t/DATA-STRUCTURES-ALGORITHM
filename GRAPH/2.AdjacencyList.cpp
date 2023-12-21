#include <iostream>
#include <vector>
using namespace std;
/*
Adjacency list

  1 --- 3 \
  |     |  \5
  2 --- 4 /  
 
  Adjacency list
  0 -> {}
  1 -> {2, 3}
  2 -> {1, 4}
  3 -> {1, 4, 5}
  4 -> {2, 3, 5}
  5 -> {3, 4}

*/
int main()
{
    int n , m;
    //  N   E
    cin >>n >> m;

    vector<int> adj[n+1];
    for(int i = 0; i<m; i++)
    {
        int u , v; //u and v are index of nodes
        cin >>u >>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 0; i<n+1; i++)
    {
        for(auto it:adj[i])
        {
            cout <<it <<" ";
        }
        cout<<endl;
    }
}