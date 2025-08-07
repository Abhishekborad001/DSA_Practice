class Solution {
  public:
    bool areKAnagrams(string &s1, string &s2, int k) {
        int n1 = s1.size();
        int n2 = s2.size();
        
        if(n1 != n2) return false;
        
        unordered_map<char, int>mpp;
        for(char ch :s1){
            mpp[ch]++;
        }
        
        for(char ch :s2){
            if(mpp[ch]>0) mpp[ch]--;
        }
        
        int cnt=0;
        for(auto it:mpp){
           cnt += it.second;
        }
        
        return cnt <= k;
    }
};