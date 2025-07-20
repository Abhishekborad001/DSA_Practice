class Solution {
public:

    void findPer(vector<int>& nums, int ind, vector<vector<int>> &ans){
        if(ind == nums.size()){
            ans.push_back({nums});
            return;
        }

        for(int i=ind; i<nums.size();i++){
            swap(nums[ind],nums[i]) ;
            findPer(nums, ind+1,ans);
            swap(nums[ind],nums[i]);

        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;

        findPer(nums, 0, ans);

        return ans;
    }
};