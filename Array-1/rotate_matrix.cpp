class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        // firstly we do the transpose for the matrix.
        for(int i=0;i<r;i++){
            for(int j=0;j<=i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //after doing the transpose, i observe that the matrix need to be mirror imaged so to obtain the answer.
        for(int i=0;i<r;i++){
            for(int j=0;j<c/2;j++){
                swap(matrix[i][j],matrix[i][c-j-1]);
            }
        }
    }
};
