#include<bits/stdc++.h>
using namespace std;

void generate(int ind,vector<string>&ans,string &s){
        if(ind>=s.size()){
            ans.push_back(s);
            return;
        }
        for(int i=ind;i<s.size();i++){
            //fixing an element one by one
            swap(s[i],s[ind]);
            //calling for rest of the elements
            generate(ind+1,ans,s);
            //undoing the swap
            swap(s[i],s[ind]);
        }
    }

vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string>ans;
    generate(0,ans,s);
    return ans;
}

int main(){
    
    return 0;
}