class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int,int>>> maxHeap;
        int n= points.size();
        vector<vector<int>> ans;

        for(int i=0; i<n; i++){
            int x = points[i][0];
            int y = points[i][1];
            maxHeap.push({x*x + y*y, {points[i][0],points[i][1]}});

            if(maxHeap.size() > k){
                maxHeap.pop();
            }
        }

        while(!maxHeap.empty()){
            ans.push_back({maxHeap.top().second.first, maxHeap.top().second.second });
            maxHeap.pop();
        }
        return ans;
    }
};