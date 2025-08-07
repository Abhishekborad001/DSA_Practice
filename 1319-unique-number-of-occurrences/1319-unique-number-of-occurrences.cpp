class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mpp;
        set<int>st;
        for(int num:arr){
            mpp[num]++;
        }

        for(auto it:mpp){
            st.insert(it.second);
        }

        if(mpp.size() == st.size()) return true;

        return false;

    }
};