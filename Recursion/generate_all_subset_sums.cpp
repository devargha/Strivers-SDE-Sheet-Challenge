class Solution
{
public:
    void find_sums(vector<int>&arr,vector<int>&ans,int sum,int index,int n){
        if(index==n){
            ans.push_back(sum);
            return;
        }
        find_sums(arr,ans,sum+arr[index],index+1,n);
        find_sums(arr,ans,sum,index+1,n);
    }
    vector<int> subsetSums(vector<int> arr, int n)
    {
        vector<int> ans;
        int sum = 0;
        int index = 0;
        find_sums(arr,ans,sum,index,n);
        
        return ans;
    }
};
