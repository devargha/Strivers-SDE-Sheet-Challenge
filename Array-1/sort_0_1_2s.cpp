class Solution {
public:
    void sortColors(vector<int>& nums) {
        //using the dutch national flag algorithm.
        //first we assign low and mid pointers to the starting index and the high pointer to the last index.
        int low = 0,mid = 0,high = nums.size()-1;
        while(mid<=high){
            //if mid == 0 that means, it should be placed in the position of low and the low'th element should be placed here.
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            } 
            //if mid == 1, that it is already present at the sorted position.
            else if(nums[mid]==1){
                mid++;
            }
            //if mid == 2, it needs to be present at the end of the array. so we swap it with the element present at the end of the array.
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
