class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int n=s.size();
        string temp = "";

        for(int i=n-1; i>=0 ; i--){
            if(s[i] != ' '){
                temp += s[i];
            }
            else{
                if (!temp.empty()) {
                    reverse(temp.begin(), temp.end());
                    if (!ans.empty()) ans += ' ';
                    ans += temp;
                    temp.clear();
                }
            }
            
        }

        if (!temp.empty()) {
            reverse(temp.begin(), temp.end());
            if (!ans.empty()) ans += ' ';
            ans += temp;
        }
        return ans;
    }
};