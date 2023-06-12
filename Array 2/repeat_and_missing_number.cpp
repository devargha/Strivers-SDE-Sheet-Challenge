#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
		int dup = -1;
		int mis = -1;
        int hash[n+1] = {0};// creating a hash array to maintain the count of each and every occurance of the elements of the given vector
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
		//checking for duplicates and missing values.
		for(int i=1;i<=n;i++){
			if(hash[i]>1){
				dup = i; 
				if(mis==-1){
					continue;
				}
				else {
					break;
				}
			}
			else if(hash[i] == 0){
				mis = i;
				if(dup==-1){
					continue;
				}
				else
				{
					break;
				}
			}
		}
		return make_pair(mis,dup);
	
}
