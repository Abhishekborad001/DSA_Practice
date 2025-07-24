class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
         vector<pair<int, int>> close;
        vector<int> ans;
        
        for(int i=0; i<arr.size(); i++){
            if (arr[i] == x) continue; // skip x itself
            close.push_back({abs(arr[i] - x), -arr[i]});
        }
        
        sort(close.begin() ,close.end());
        
        for(int i=0; i < k && i < close.size(); i++){
            
            ans.push_back(-close[i].second);
        }
        
        
        return ans;
        
        
    }
};