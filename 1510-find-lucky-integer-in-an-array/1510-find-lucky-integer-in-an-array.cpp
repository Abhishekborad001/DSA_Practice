class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map <int,int>freq;
        int ans=-1;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]+=1;
        }

        for(auto it:freq){
            if((it.first == it.second) && it.first>ans){
                ans=it.first;
            }
        }
        return ans;
    }
};