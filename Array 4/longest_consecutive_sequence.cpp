class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        unordered_set<int> s;
        int maxi = 1;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        for(auto i:s){
            if(s.find(i-1)==s.end()){
                int temp = i;
                int count = 1;
                while(s.find(temp+1)!=s.end()){
                    count++;
                    temp++;
                }
                maxi = max(count,maxi);
            }
        }
        return maxi;
    }
};
