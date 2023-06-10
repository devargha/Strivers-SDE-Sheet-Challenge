class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // firstly, we find out the dip index. If we dont find the dip index at all, i.e dip_index remains -1, then that means that the given permutation is the largest permutation lexicographically. so then we just reverse the vector. sorting does the same work but it has a high time complexity.
        int dip_index = -1;
        int n = nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                dip_index = i;
                cout<<dip_index;
                break;
            }
        }

        if(dip_index == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        // now we need to check through the values after the dip index if there is a smallest greater value than the dip_index array value. if yes then swap it
        for(int i=n-1;i>dip_index;i--){
            if(nums[i]>nums[dip_index]){
                swap(nums[i],nums[dip_index]);
                break;
            }
        }
        //now we can use sort function to sort the elements after the dip_index so that we get the minimum value as a whole
        sort(nums.begin()+dip_index+1,nums.end());
    }
};
