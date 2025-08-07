class Solution {
  public:
    string isStringExist(vector<string> arr, int N, string s) {
        int n=s.size();
        
        for(int i=0; i<N;i++){
            if(arr[i].size() != n) continue;
            int cnt=0;
            for(int j=0; j<n; j++){
                if(arr[i][j] != s[j]) cnt++;
            }
            
            if(cnt==1) return "True";
            
        }
        
        return "False";
        
    }
};