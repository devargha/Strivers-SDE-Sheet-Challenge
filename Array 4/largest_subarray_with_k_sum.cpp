#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
  int maxi = 0;
  for(int i=0;i<arr.size();i++){
    int count;long long sum=0;
    for(int j=i;j<arr.size();j++){
      sum+=arr[j];
      if(sum==0){
        count=(j-i)+1;
        maxi = max(maxi,count);
      }
    }
  }
  return maxi;

}
