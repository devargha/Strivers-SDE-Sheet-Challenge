class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        if(nums.size()==1) return {nums[0]};
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second>(nums.size()/3)){
                ans.push_back(i.first);
            }
        }
        return ans;

    }
};
