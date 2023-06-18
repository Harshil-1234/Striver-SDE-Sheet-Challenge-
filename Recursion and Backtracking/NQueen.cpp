#include<bits/stdc++.h>
using namespace std;

void help(int i,int n,vector<vector<int>>&chessBoard,vector<vector<int>>&ans,vector<int>&col,vector<int> &tl,vector<int>&tr){
    if(i==n){
        vector<int>temp;
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                temp.push_back(chessBoard[j][k]);
            }
        }
        ans.push_back(temp);
        return;
    }
    for(int j=0;j<n;j++){
        if(col[j]==0 && tl[i-j+n-1]==0 && tr[i+j]==0){
            chessBoard[i][j] = 1;
            col[j]=tl[i-j+n-1]=tr[i+j]=1;
            help(i+1,n,chessBoard,ans,col,tl,tr);
            chessBoard[i][j] = 0; //Backtracking
            col[j]=tl[i-j+n-1]=tr[i+j]=0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>>ans;
    vector<int> col(n,0) , tl(2*n,0) , tr(2*n,0);
    vector<vector<int>>chessBoard(n,vector<int>(n,0));
    help(0,n,chessBoard,ans,col,tl,tr);
    return ans;
}

int main(){
    
    return 0;
}