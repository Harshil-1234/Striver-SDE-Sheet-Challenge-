#include<bits/stdc++.h>
using namespace std;

void generate(int i,vector<int>&arr,vector<int>&subset,vector<vector<int>>&ans){
    //Base Condition
    if(i>=arr.size()){
        ans.push_back(subset);
        return;
    }
    
    //ith element to be included
    subset.push_back(arr[i]);
    generate(i+1,arr,subset,ans);
    subset.pop_back();
    
     //ith element to NOT be included
    while((i+1)<arr.size() && (arr[i]==arr[i+1])) i++;
    generate(i+1,arr,subset,ans);
    
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    vector<int>subset;
    vector<vector<int>>ans;
    generate(0,arr,subset,ans);
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    return 0;
}