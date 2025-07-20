class Solution {
  public:
  
    void findPer(string &s, int ind, set<string> &ans){
        if(ind == s.size()){
            ans.insert(s);
            return;
        }

        for(int i=ind; i<s.size();i++){
            swap(s[ind],s[i]) ;
            findPer(s, ind+1,ans);
            swap(s[ind],s[i]);

        }
    }
    vector<string> findPermutation(string &s) {
        set<string> ans;
        findPer(s,0,ans);
        
        return vector<string>(ans.begin(), ans.end());
    }
};
