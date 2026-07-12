class Solution {
public:
  bool issafe(int n,vector<string>& cur,int col,int row){
        int drow=row;
        int dcol=col;
        while(drow>=0 && dcol>=0){
            if(cur[drow][dcol]=='Q'){
                return false;
            }
            drow--;
            dcol--;
        }
        drow=row;
        dcol=col;
        while(dcol>=0){
             if(cur[drow][dcol]=='Q'){
                return false;
            }
            dcol--;
        }
         drow=row;
        dcol=col;
        while(drow<n && dcol>=0){
            if(cur[drow][dcol]=='Q'){
                return false;
            }
            drow++;
            dcol--;
        }
        return true;
    }
    void solve(int index,int n,int& count ,vector<string>& cur){
        if(index==n){
           count=count+1;
            return;
        }
        for(int i=0;i<n;i++){
            if(issafe(n,cur,index,i)){
                cur[i][index]='Q';
                solve(index+1,n,count,cur);
                cur[i][index]='.';
            }
        }
    }
    int totalNQueens(int n) {
        int count=0;
        vector<string> cur(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            cur[i]=s;
        }
        solve(0,n,count,cur);
        return count;
    }
};