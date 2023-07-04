class Solution {
public:
    bool isSafe(vector<string>& board,int row,int col,int n){
        int temprow = row;
        int tempcol = col;
        //checking upper diagonal.
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }

        row = temprow;
        col = tempcol;

        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }

        row = temprow;
        col = tempcol;

        while(col>=0 && row<=n-1){
            if(board[row][col]=='Q'){
                return false;
            }
            row++;
            col--;
        }

        return true;
    }
    void findPos(vector<vector<string>>& ans,vector<string>& board, int col, int n){    
        // if the col value is equal to the size of n, then push the current string vector into the ans vector as we have obtained one of our answers.
        if(col==n){
            ans.push_back(board);
            return;
        }

        for(int i=0;i<n;i++){
            if(isSafe(board,i,col,n)){
                board[i][col] = 'Q';
                findPos(ans,board,col+1,n);
                //backtrack here
                board[i][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i] = s;
        }
        findPos(ans,board,0,n);
        return ans;
    }
};
