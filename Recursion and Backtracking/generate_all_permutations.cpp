class Solution {
public:
    void generate(vector<int>&nums, vector<vector<int>>& ans,vector<int>& temp,map<int,int>& mp){
        if(nums.size()==temp.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!mp[i]){
                temp.push_back(nums[i]);
                mp[i]++;
                generate(nums,ans,temp,mp);
                temp.pop_back();
                mp[i]--;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        map<int,int> mp;
        generate(nums,ans,temp,mp);
        return ans;
    }
};
