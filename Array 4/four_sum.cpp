class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        int n= nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long long> temp;
                for(int k=j+1;k<n;k++){
                    long long sum = nums[i]+nums[j];
                    sum+=nums[k];
                    long long tf = target-sum;
                    if(temp.find(tf)!=temp.end()){
                        vector<int> vect = {nums[i],nums[j],nums[k],int(tf)};
                        sort(vect.begin(),vect.end());
                        s.insert(vect);
                    }
                    temp.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;

    }
};
