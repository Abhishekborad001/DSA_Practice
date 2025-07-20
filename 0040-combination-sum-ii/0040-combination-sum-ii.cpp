class Solution {
public:

    void combinations(vector<int>& arr, int ind , int target, vector<int>&ans, vector<vector<int>>&result){

        if(target==0){
            result.push_back({ans});
            return;
        }

       for (int i = ind; i < arr.size(); i++) {
            if (i > ind && arr[i] == arr[i - 1]) continue; 
            if (arr[i] > target) break; 
            
            ans.push_back(arr[i]);
            combinations(arr, i + 1, target - arr[i], ans, result);
            ans.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<int>ans;
        vector<vector<int>>result;
        sort(arr.begin(),arr.end());

        combinations(arr, 0, target, ans, result);

        return result;
        
    }
};