class Solution {
public:
int count = 0;
//checking for each element in the left subarray to be merged with the right subarray if any element in the left satisfies the given condition.
    void count_reverse(vector<int> &nums,int left,int mid,int right){
        int track = mid+1;
        for(int i=left;i<=mid;i++){
            while(track<=right && 2*(long)nums[track]<nums[i])
            {
                track++;
            }
            count = count + (track-(mid+1));
        }
    }
    void merge(vector<int>&nums,int left,int mid,int right){
        int i=left;
        int j=mid+1;
        vector<int> temp;

        while(i<=mid && j<=right){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=right){
            temp.push_back(nums[j]);
            j++;
        }

        for(int k=left;k<=right;k++){
            nums[k] = temp[k-left];
        }
    }
    void merge_sort(vector<int> &nums,int left,int right){
        if(left>=right) return;
        int mid = (left+right)/2;
        merge_sort(nums,left,mid);
        merge_sort(nums,mid+1,right);
        count_reverse(nums,left,mid,right);
        merge(nums,left,mid,right);
    }
    int reversePairs(vector<int>& nums) {
        merge_sort(nums,0,nums.size()-1);
        return count;
    }
};
