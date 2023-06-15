class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>:: iterator itr = nums.begin(); //taking this iterator so that it should not take itself as the other element. ex : 3+3 = 6. taking the same element twice will not work. it should be distinct.
        for(int i=0;i<nums.size();i++){
            auto it = find(nums.begin(),nums.end(),target-nums[i]); //using find function to find the position of the other element.
            if(it!=nums.end() && itr!=it){
                nums.clear();
                nums.push_back(i);
                nums.push_back(distance(nums.begin(),it));
                break;
            }
            itr++;
        }
       
        return nums;
    }
};
