class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int>ans;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == x) continue;
            
            int diff = abs(arr[i]-x);
            pq.push({diff, -arr[i]});
        }
        
        while(k-- && !pq.empty()){
            ans.push_back(-pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};