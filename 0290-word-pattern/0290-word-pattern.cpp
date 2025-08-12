class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp;
        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                words.push_back(temp);
                temp.clear();
            } else {
                temp += s[i];
            }
        }

        if (pattern.size() != words.size()) return false;

        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];

            if (p2w.count(c) && p2w[c] != w) return false;
            if (w2p.count(w) && w2p[w] != c) return false;

            p2w[c] = w;
            w2p[w] = c;
        }

        return true;
    }
};
