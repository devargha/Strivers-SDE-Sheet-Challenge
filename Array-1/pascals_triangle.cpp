class Solution {
public:
    // here we generate a vector for each row based on the n-1 c r-1 method where in we can calculate the value for every required row and column.
    vector<int> ncr_for_every_iteration(int rows){
        vector<int> ans;
        ans.push_back(1);
        long long res = 1;
        for(int i=1;i<rows;i++){
            res = res*(rows-i);
            res = res/i;
            ans.push_back(res);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vect; 
        for(int i=1;i<=numRows;i++){
            vect.push_back(ncr_for_every_iteration(i));
        }
        return vect;
    }
};
