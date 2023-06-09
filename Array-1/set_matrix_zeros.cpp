class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> r,c;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0){
                r.push_back(i);
                c.push_back(j);}// now we have the indices where the value in the matrix is zero
            }
        }
        //now we have to make the column values zero for every row 
        for(int i=0;i<r.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                matrix[r[i]][j] = 0;
            }
        }
        // now we make the row values zero for every column
        for(int i=0;i<c.size();i++){
            for(int j=0;j<matrix.size();j++){
                matrix[j][c[i]] = 0;
            }
        }
        
    }
};
