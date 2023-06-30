#include<bits/stdc++.h>

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
string kthPermutation(int n, int k) {
    vector<int> nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        vector<vector<int>> perm = permute(nums);
    vector<int> ans;
        sort(perm.begin(),perm.end());
        for(int i=0;i<=perm.size();i++){
            if(i==k-1){
                ans = perm[i];
                break;
            }
        }
        string res = "";
        for(int i=0;i<ans.size();i++){
            string st = to_string(ans[i]);
            res.append(st);
        }
        return res;
}
