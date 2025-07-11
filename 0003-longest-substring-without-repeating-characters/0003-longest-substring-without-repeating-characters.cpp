class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0 || n==1) return n;
        int cnt=0;

        //keep track of last index of each character
        vector<int> lastindex(128,-1);

        int start=0;

        for(int end=0;end<n;end++){
            start = max(start,lastindex[s[end]]+1);

            cnt = max(cnt,end-start+1);

            lastindex[s[end]] = end;
        }
        
        return cnt;
    }
};