int ans = 0;
void merge(vector<int>&arr,int low,int mid,int high){
    vector<int> vect;
    int i = low;
    int j = mid+1;
    
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            vect.push_back(arr[i]);
            i++;
        }
        else
        {
            vect.push_back(arr[j]);
            ans=ans+(mid-i+1);
            j++;
        }
        
    }
    while(i<=mid){
        vect.push_back(arr[i]);
        i++;
    }
    while(j<=high){
        vect.push_back(arr[j]);
        j++;
    }

    for(int t=low;t<=high;t++){
        arr[t] = vect[t-low];
    }

}

void merge_sort(vector<int>&arr,int low,int high){
    if(low>=high) return;
    int mid = (low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr, mid+1,high);
    merge(arr,low,mid,high);
}

int numberOfInversions(vector<int>&a, int n) {
    merge_sort(a,0,n-1);
    return ans;
}
