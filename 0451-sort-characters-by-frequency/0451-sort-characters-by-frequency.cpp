class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mpp;
        string ans;

        for(char ch:s){
            mpp[ch]++;
        }

        vector<pair<char, int>> vec(mpp.begin(), mpp.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        for (auto &p : vec) {
            ans +=string(p.second, p.first);
        }
        return ans;
    }
};