// Coding Ninjas-Studio code submission
#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int>&vis,vector<int>adj[],vector<int>&sub){
    vis[node] = 1;
    sub.push_back(node);

    for(auto adjNode : adj[node]){
        if(!vis[adjNode]){
            dfs(adjNode,vis,adj,sub);
        }
    }

}
vector<vector<int > > depthFirstSearch(int V, int E, vector<vector<int > > &edges)
{
    // Write your code here
    vector<int >adj[V];
    vector<int >vis(V,0);
    for(auto ed : edges){
        adj[ed[0]].push_back(ed[1]);
        adj[ed[1]].push_back(ed[0]);
    }
    int comp = 0;
    bool compPushed = false;
    vector<vector<int > >sudo;
    for(int i=0;i<V;i++){
        vector<int >sub;
        if(!vis[i]){
            comp++;
            dfs(i,vis,adj,sub);
            sort(sub.begin(),sub.end());
            sudo.push_back(sub);
        }
    }
    sort(sudo.begin(),sudo.end());
    vector<vector<int > >ans;
    // ans.push_back({comp});
    for(auto vec : sudo){
        ans.push_back(vec);
    }
    return ans;
}

int main(){
    // Main function was not visible in Code Studios
    return 0;
}