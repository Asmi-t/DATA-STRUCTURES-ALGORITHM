#include <bits/stdc++.h>
using namespace std;

class DisjointSet
{
    public:
    vector<int> parent , rank;

    DisjointSet(int n)
    {
        //n+1 because is works for 0 as well as 1 based idexing
        rank.resize(n+1, 0);
        parent.resize(n+1);
        //Initially everyone is parent of itself
        for(int i = 0; i<n+1; i++)
        {
             parent[i] = i;
        }
    }

    //finding Ultimate parent
    int findUPar(int u)
    {
        if(u == parent[u])
          return u;
        return parent[u] = findUPar(parent[u]);  
    }    

    // take union by rank
    void unionByRank(int u , int v)
    {
        //find ultimte parent of u and v
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        //if the ultimate parent is same so u and v is of same component
        if(ulp_u == ulp_v)
          return;

        //make the node parent which has high rank
        if(rank[ulp_u] < rank[ulp_v]) //ulp_v becomes the parent of ulp_u
        {
            parent[ulp_u] = ulp_v;
        }  
        else if(rank[ulp_u] > rank[ulp_v]) // ult_u becomes the parent of ulp_v
        {
            parent[ulp_v] = ulp_u;
        }
        else // make anyone is parent to anyone if rank is same
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }    
};

int main()
{
    DisjointSet ds(7);
    
    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(4,5);
    ds.unionByRank(6,7);
    ds.unionByRank(5,6);
    //if 3 and 7 is of same como or not
    if(ds.findUPar(3) == ds.findUPar(7))
    {
        cout <<"3 and 7 is in same compo"<<endl;
    }
    else
    {
        cout <<"3 and 7 is not in same compo"<<endl;
    }
     ds.unionByRank(3,7);
     if(ds.findUPar(3) == ds.findUPar(7))
    {
        cout <<"3 and 7 is in same compo"<<endl;
    }
    else
    {
        cout <<"3 and 7 is not in same compo"<<endl;
    }
}