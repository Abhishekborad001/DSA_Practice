class Solution {
public:

    void getcombinations(vector<int>&arr, int index, int target, vector<int>&comb , set<vector<int>>&result){
        // Three choices 
        // 1. include single times
        // 2. include multiple times
        // 3. not include

        if(target <0 ||  index==arr.size()){
            return;
        }
        if(target==0){
            result.insert({comb});
            return;
        }

        // single times
        comb.push_back(arr[index]);
        getcombinations(arr,index+1,target-arr[index], comb, result);

        //multiple
        getcombinations(arr,index,target-arr[index], comb, result);

        comb.pop_back();
        //exclusion
        getcombinations(arr,index+1,target, comb, result);

    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int>comb;
        set<vector<int>> result;
        getcombinations(arr,0, target, comb, result);

        
        return vector<vector<int>>(result.begin(), result.end());
    }
};