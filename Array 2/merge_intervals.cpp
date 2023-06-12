class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& m) {
        vector<vector<int>> ans;
        sort(m.begin(),m.end());
        for(int i=0;i<m.size()-1;i++){
            for(int j=0;j<m[0].size()-1;j++){
                if(m[i][j+1]>=m[i+1][j]){
                    if(m[i+1][j+1]<=m[i][j+1]){
                        m[i+1][j] = m[i][j];
                        m[i+1][j+1] = m[i][j+1];
                        break;
                    }
                    m[i+1][j] = m[i][j];
                    break;
                }
                else if(m[i][j+1]<m[i+1][j]){
                    vector<int> temp;
                    temp.push_back(m[i][j]);
                    temp.push_back(m[i][j+1]);
                    ans.push_back(temp);
                    break;
                }
            }
        }
        vector<int> temp;
        temp.push_back(m[m.size()-1][0]);
        temp.push_back(m[m.size()-1][1]);
        ans.push_back(temp);
        return ans;


    }
};
