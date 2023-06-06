#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int>&vis,vector<int>adj[],stack<int>&st){
    vis[node] = 1;

    for(auto adjNode : adj[node]){
        if(!vis[adjNode]){
            dfs(adjNode,vis,adj,st);
        }
    }
    st.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    vector<int>vis(v,0);
    vector<int>adj[v];
    for(auto ed : edges){
        adj[ed[0]].push_back(ed[1]);
    }
    stack<int>st;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i,vis,adj,st);
        }
    }
    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    if(ans.size()==v)return ans;
    return {};
}
int main(){
    
    return 0;
}