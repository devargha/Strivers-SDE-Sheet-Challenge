bool searchMatrix(vector<vector<int>>& arr, int target) {
        int i = 0;
        int j = arr[0].size()-1; //take the mid element as the top most corner element.
        //running a loop so that i and j values dont go out of bounds. If they go out of bounds,that means the element is not present in the 2d array.
        while(i>=0 && i<arr.size() && j>=0 && j<arr[0].size()){
            if(target==arr[i][j]){
                return true;
            }
            else{
                if(target>arr[i][j]){
                    i++;
                }
                else
                {
                    j--;
                }
            }
        }
        return false;
}
