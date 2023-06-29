class Solution {
public:
    void get_partitions(string s,vector<vector<string>>&ans, vector<string>& vect,int index){
        if(index==s.length()) {
            ans.push_back(vect);
            return;
        }
        for(int i=index;i<s.length();i++){
            if(check_palindrome(s,index,i)){
                vect.push_back(s.substr(index,i-index+1));
                get_partitions(s,ans,vect,i+1);
                vect.pop_back();
            }
        }
    }

bool check_palindrome(string s,int index,int i){
    while(index<=i){
    if(s[index++]!=s[i--]){
        return false;
    }
    }
    return true;
}

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans; //to store the final answer.
        vector<string> vect; //to store the temporary strings
        get_partitions(s,ans,vect,0);
        return ans;
    }
};
