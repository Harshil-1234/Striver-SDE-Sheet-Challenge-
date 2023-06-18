#include<bits/stdc++.h>
using namespace std;

void generate(int index,vector<int>& candidates, int target,vector<int>&subseq,vector<vector<int>>&ans){
    if(target == 0){
        ans.push_back(subseq);
        return;
    }
    for(int i=index;i<candidates.size();i++){
        if(i > index && candidates[i] == candidates[i-1]) continue;
        if(candidates[i] > target) break;
        subseq.push_back(candidates[i]);
        generate(i+1,candidates,(target - candidates[i]),subseq,ans);
        subseq.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
    vector<int>subseq;
    vector<vector<int>>ans;
    generate(0,candidates,target,subseq,ans);
    // sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    return 0;
}