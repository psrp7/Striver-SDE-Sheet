#include <bits/stdc++.h>
using namespace std;




void tt(vector<int> adj[], int S, bool visited[], stack<int> &st)
{
    visited[S] = true;
    bool f = false;



    for (int v : adj[S])
     {
        if (!visited[v])
               tt(adj, v, visited, st);
            f = true;
     }
    st.push(S);
}

void DFS(vector<int> adj[], int s, bool visited[], vector<int> &ans)
{
    visited[s] = true;
    ans.push_back(s);
    int count =0;
    for (int v : adj[s])
    {
        if (!visited[v])
            DFS(adj, v, visited, ans);
    }
}

vector<vector<int>> stronglyConnectedComponents(int n, vector<vector<int>> &edges)
{
    vector<int> adj1[n], adj2[n];
    bool visited[n] = {0};
    stack<int> st;
    vector<vector<int>> res;



    for (auto i : edges)
         adj1[i[0]].push_back(i[1]);

    for (int i = 0; i < n; i++)
         if (!visited[i])
             tt(adj1, i, visited, st);

    for (auto i : edges)
                 adj2[i[1]].push_back(i[0]);
        fill(visited, visited + n, 0);
      int ptr =0;
for (int i = 0; i < n; i++)
         if (!visited[i])
             tt(adj1, i, visited, st);



    while (!st.empty())
    {
        int u = st.top();
        st.pop();
        ptr++;
        vector<int> ans;
        if (!visited[u])
        {
            DFS(adj2, u, visited, ans);
            res.push_back(ans);
            ptr  = 0;
        }

        // if(ptr == 0){

        // }
    }
    return res;
}