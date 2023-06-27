class Solution {
public:
    void get_subsets(vector<int>& nums,vector<int>& temp,set<vector<int>>& sett,int n){
        if(n==-1){
            sett.insert(temp);
            return;
        }
        temp.push_back(nums[n]);
        get_subsets(nums,temp,sett,n-1);
        temp.pop_back();
        get_subsets(nums,temp,sett,n-1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size()-1;
        sort(nums.begin(),nums.end());
        set<vector<int>> sett;
        vector<int> temp;
        get_subsets(nums,temp,sett,n);
        vector<vector<int>> sol(sett.begin(),sett.end());
        return sol;
    }
};
