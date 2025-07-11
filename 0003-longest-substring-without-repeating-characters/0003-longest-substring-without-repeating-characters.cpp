class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0 || n==1) return n;
        int cnt=0;
        vector<bool> visited(128,false);

        int l=0,r=0;
        while(r<n){
            while(visited[s[r]] == true){
                visited[s[l]] = false;
                l++;
            }
            visited[s[r]] = true;
            cnt = max(cnt,r-l+1);
            r++;
        }

        return cnt;
    }
};