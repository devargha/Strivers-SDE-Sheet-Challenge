class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //we create a map(int,int) and insert all the elements along with key and value. Then we traverse through the map and if we obtain a value > 1 for any key, then we return that key as the duplicate element required.
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second > 1){
                return i.first;
            }
        }
        return 0;
    }
};
