//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    bool isSafe(int i, int j , vector<vector<int>> m, int n , vector<vector<bool>> vis)
    {
        if(i>=n || i<0 || j>=n || j<0 || vis[i][j] || !m[i][j]) return false;
        return true;
    }
    void solve(int i , int j , vector<vector<int>> &m, int &n , vector<string> &ans,
                vector<vector<bool>> vis , string path)
    {
        if(i == n-1 && j == n-1)
        {
            ans.push_back(path);
        }

        //D L R U
        // Down
        if( isSafe(i+1, j , m ,n, vis) )
        {
            vis[i+1][j] = 1;
            solve(i+1, j, m, n, ans ,vis, path+'D');
            vis[i+1][j] = 0;
        }

        // left
        if( isSafe(i, j-1 , m ,n, vis) )
        {
            vis[i][j-1] = 1;
            solve(i, j-1, m, n, ans ,vis, path+'D');
            vis[i][j-1] = 0;
        }

        // Right
        if( isSafe(i, j+1 , m ,n, vis) )
        {
            vis[i][j+1] = 1;
            solve(i, j+1, m, n, ans ,vis, path+'D');
            vis[i][j+1] = 0;
        }

        // Up
        if( isSafe(i-1, j , m ,n, vis) )
        {
            vis[i-1][j] = 1;
            solve(i-1, j, m, n, ans ,vis, path+'D');
            vis[i-1][j] = 0;
        }

    }
    public:
        vector<string> findPath(vector<vector<int>> &m, int n) {
        //Unique case
        if(m[0][0] == 0) return {""};
        vector<string> ans;
        vector<vector<bool>> vis(n , vector<bool>(n, 0));
        string path;
        solve(0, 0, m , n , ans , vis, path);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends