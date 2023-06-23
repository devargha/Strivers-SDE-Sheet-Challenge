class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //using moore's voting algorithm
        //also used this to solve the majority element in the array greater than n/2
        int count = 0;
        int maxi = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else
            {
                count = 0;
            }
            maxi = max(maxi,count);

        }
        return maxi;
    }
};
