class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>> pq;
        unordered_map<int,int> mpp;
        vector<int>ans;

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        for(auto i = mpp.begin(); i!=mpp.end(); i++){
            pq.push({i-> second , i-> first});
            if(pq.size() > k){
                pq.pop();
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};