#include<bits/stdc++.h>
using namespace std;

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    vector<int>adj[v];
    for(auto ed : edges){
        adj[ed[0]].push_back(ed[1]);
    }
    vector<int>indegree(v,0);
    for(int i=0;i<v;i++){
        for(auto adjNode : adj[i]){
            indegree[adjNode]++;
        }
    }
    queue<int>q;
    for(int i=0;i<v;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    vector<int>ans;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for(auto adjNode : adj[node]){
            indegree[adjNode]--;
	        if(indegree[adjNode] == 0){
	            q.push(adjNode);
	        }
        }
    }

    return ans;
}
int main(){
    
    return 0;
}