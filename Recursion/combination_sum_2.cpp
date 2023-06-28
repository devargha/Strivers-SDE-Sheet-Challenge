class Solution {
public:
    void get_combos(vector<int>& arr,vector<int>& temp,vector<vector<int>>& ans,int target,int n){
        
            if(target==0){
                ans.push_back(temp);
                return;
            }
            
        for(int i=n;i<arr.size();i++){
            if(i>n && arr[i]==arr[i-1]){
                continue;
            }
            if(arr[i]>target){
                break; // we are breaking this here because if a element is greater than target, there is no use of considering the other elements as they will be also greater than the element as the array is initially sorted.
            }
            temp.push_back(arr[i]);
            get_combos(arr,temp,ans,target-arr[i],i+1);
            temp.pop_back();
        }

    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        // set<vector<int>> sett;
        vector<int> temp;
        vector<vector<int>> ans;
        get_combos(candidates,temp,ans,target,0);
        return ans;
    }
};
