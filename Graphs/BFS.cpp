#include<bits/stdc++.h>
using namespace std;

vector<int> BFS(int V, vector<pair<int, int>> edges)
{
    // Write your code here
    vector<int>adj[V];
    vector<int>vis(V,0);
    for(auto ed : edges){
        adj[ed.first].push_back(ed.second);
        adj[ed.second].push_back(ed.first);
    }
    for(int i=0;i<V;i++){
        sort(adj[i].begin(),adj[i].end());
    }
    vector<int>ans;
    queue<int>q;
    for(int i=0;i<V;i++){
        if(!vis[i]){
            q.push(i);
            vis[i] = 1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                ans.push_back(node);
                for(auto adjNode : adj[node]){
                    if (!vis[adjNode]) {
                        vis[adjNode] = 1;
                        q.push(adjNode);
                    }
                }
            }
        }
    }
    return ans;
}

int main(){
    
    return 0;
}