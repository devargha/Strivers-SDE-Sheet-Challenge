#include <bits/stdc++.h> 
int maximumProfit(vector<int> &v){
    //for i'th element, maximum profit is obtained by taking the
    // minimum element from zero to i-1'th element.
    int max_profit = 0; //because we dont want negative profits.
    int min_ele = v[0];
    for(int i=1;i<v.size();i++){
        int cost = v[i]-min_ele;
        max_profit = max(max_profit,cost);
        min_ele = min(min_ele,v[i]);
    }
    return max_profit;
    
    
}
