class Solution {
public:
    void get_combos(vector<int>& candidates,set<vector<int>>& s,vector<int>& temp,int target,int n){
        if(n==0 && target==0){
            if(target==0) s.insert(temp);
            return;
        }
        else{
            return;
        }
        //if the particular item fits into the knapsack, we have two choices. To take it or leave it.
        if(candidates[n-1]<=target){
            //case 1: take it
            temp.push_back(candidates[n-1]);
            get_combos(candidates,s,temp,target-candidates[n-1],n);
            temp.pop_back();
        }
        //case 2: leave it
        get_combos(candidates,s,temp,target,n-1);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        // sort(candidates.begin(),candidates.end());
        set<vector<int>> s;
        vector<int> temp;
        get_combos(candidates,s,temp,target,n);
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;    
    }
};
