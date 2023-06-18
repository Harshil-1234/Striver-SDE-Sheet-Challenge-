#include<bits/stdc++.h>
using namespace std;

void subsequence(int index, int target,vector<int>& candidates,vector<int>& subseq,vector<vector<int>>& ans){
    if(index == candidates.size()){
        if(target == 0){
            ans.push_back(subseq);
        }
        return;
    }
    //include ith element
    //this means candidates[index] can be added to give target as it is less than target
    if(candidates[index]<=target){
        subseq.push_back(candidates[index]);
        subsequence(index,(target - candidates[index]),candidates,subseq,ans);
        subseq.pop_back();
    }
    //not include ith element
    subsequence(index+1,target,candidates,subseq,ans);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>>ans;
    vector<int>subseq;

    subsequence(0,target,candidates,subseq,ans);
    
    return ans;
}

int main(){
    
    return 0;
}