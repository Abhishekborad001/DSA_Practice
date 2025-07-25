class Solution {
private:
    struct cmp {
        bool operator()(pair<int, int>& a, pair<int, int>& b){
            if (a.first == b.first)
                return a.second < b.second; // value descending
            return a.first > b.first; // frequency ascending
        }
    };
public:
    
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mpp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> mHeap;
        vector<int>ans;

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        for(auto i=mpp.begin(); i!=mpp.end(); i++){
            mHeap.push({i->second, i->first});
        }

        while(!mHeap.empty()){
            ans.insert(ans.end(), mHeap.top().first, mHeap.top().second);
            mHeap.pop();
        }
        return ans;

    }
};