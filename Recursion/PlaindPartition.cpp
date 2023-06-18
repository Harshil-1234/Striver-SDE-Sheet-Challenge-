#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s,int start,int end){
    while(start<=end){
        if(s[start++]!=s[end--])return false;
    }
    return true;
}
void solve(string s,int ind,vector<string>&part,vector<vector<string>>&ans){
    if(ind == s.size()){
        ans.push_back(part);
        return;
    }

    for(int i=ind;i<s.size();i++){
        if(isPalindrome(s,ind,i)){
            part.push_back(s.substr(ind,i-ind+1));
            solve(s,i+1,part,ans);
            part.pop_back();
        }
    }
}
vector<vector<string>> partition(string s) {
    vector<vector<string>>ans;
    vector<string>part;
    solve(s,0,part,ans);
    return ans;
}
int main(){
    
    return 0;
}