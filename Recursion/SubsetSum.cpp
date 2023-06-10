#include<bits/stdc++.h>
using namespace std;

void generate(int ind,vector<int>&arr,vector<int>&ans,int sum){
    if(ind == arr.size()){
        ans.push_back(sum);
        return;
    }
    
    //including ith element
    // sum += arr[ind];
    generate(ind+1,arr,ans,sum+arr[ind]);
    
    //ignoring ith element
    // sum -= arr[ind];
    generate(ind+1,arr,ans,sum);
}

vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int>ans;
    generate(0,num,ans,0);
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    
    return 0;
}