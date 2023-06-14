class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moore's voting algorithm.
        if(nums.size()==1) return nums[0];
        int count = 1;
        int ref = nums[0];
        for(int i=1;i<nums.size();i++){
            if(count!=0){
                if(ref==nums[i]){
                    count++;
                }
                else
                {
                    count--;
                }
            }
            else
            {
                ref = nums[i];
                count = 1;
            }
        }

        if(count > 0 ) return ref;
        
        return 0;
    }
};
