class Solution {
public:
    void allsubsets(vector<int>& nums , vector<int>& ans,int i,vector<vector<int>> &subsets){
        if(i==nums.size()){
            //store subsets
            subsets.push_back({ans});
            return;
        }

        //include
        ans.push_back(nums[i]);
        allsubsets(nums, ans, i+1,subsets);

        //ecxlude
        ans.pop_back();
        allsubsets(nums, ans, i+1,subsets);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets;
        vector<int>ans;
        allsubsets(nums,ans,0,subsets);
        return subsets;
    }
};