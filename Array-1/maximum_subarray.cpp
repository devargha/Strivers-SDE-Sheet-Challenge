class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN; //assigning a max value to compare with the subarray sums
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum+nums[i];
            ans = max(ans,sum);
            if(sum<0) { //now if we get any negative sum, we make it zero as we dont need it because it would just keep decreasing the total value.
                sum = 0;
            }
        }
        return ans;
    }
};
