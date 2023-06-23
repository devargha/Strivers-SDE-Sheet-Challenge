#include <bits/stdc++.h>

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>> s;
        for(int i=0;i<arr.size();i++){
            set<int> temp;
            for(int j=i+1;j<arr.size();j++)
            {   
                if(temp.find(-(arr[i]+arr[j]))!=temp.end()){
                    vector<int> v = {arr[i],arr[j],-(arr[i]+arr[j])};
                    sort(v.begin(),v.end());
                    s.insert(v);
                }
                temp.insert(arr[j]);
            }
        }
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
}
