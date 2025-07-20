class Solution {
public:

    void combinations(vector<int>& arr, int ind , int target, vector<int>&ans, set<vector<int>>&result){
        if(target==0){
            result.insert({ans});
            return;
        }
        if(ind >= arr.size() || target<0 ) return;
        

        ans.push_back(arr[ind]);
        combinations(arr, ind+1, target-arr[ind], ans, result);
        ans.pop_back();

        int nextInd = ind + 1;
        while (nextInd < arr.size() && arr[nextInd] == arr[ind])
            nextInd++;
        combinations(arr, nextInd, target, ans, result);
       
        
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        vector<int>ans;
        set<vector<int>>result;
        sort(arr.begin(),arr.end());

        combinations(arr, 0, target, ans, result);

        return vector<vector<int>> (result.begin(),result.end());
        
    }
};