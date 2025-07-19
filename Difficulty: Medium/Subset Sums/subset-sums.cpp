class Solution {
  public:
    
    void allsubsets(vector<int>&arr, vector<int>&ans, int i, vector<int> &result){
        
        if(i==arr.size()){
            // add subset to the result
            int cnt=0;
            for(int i : ans){
                cnt += i;
            }
            result.push_back(cnt);
            return;
        }
        
        //include
        ans.push_back(arr[i]);
        allsubsets(arr, ans, i+1, result);
        
        //exclude
        ans.pop_back();
        allsubsets(arr, ans, i+1, result);
    }
    
    vector<int> subsetSums(vector<int>& arr) {
        vector<int> result;
        vector<int> ans;
        allsubsets(arr, ans, 0, result);
        
        return result;
        
    }
};