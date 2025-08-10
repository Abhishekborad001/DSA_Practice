class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int ansLen=0;
        int n=s.size();
        // Expand from center

        for(int i=0; i<n; i++){

            // Odd length
            int left =i;
            int right = i;

            while(left>=0 && right < n && s[left]==s[right]){
                if((right - left +1) > ansLen){
                    ansLen = right - left +1 ;
                    ans = s.substr(left , right-left+1);
                }
                left--;
                right++;
            }

            // Even Length
            left = i;
            right = i+1;
            while(left>=0 && right < n && s[left]==s[right]){
                if((right - left +1) > ansLen){
                    ansLen = right - left +1 ;
                    ans = s.substr(left , right-left+1);
                }
                left--;
                right++;
            }
            

        }
        return ans;
    }
};