class Solution {
public:
    void allsubsets(vector<int>& nums , vector<int>& ans,int i,set<vector<int>> &subsets){
        if(i==nums.size()){
            //store subsets
            subsets.insert({ans});
            return;
        }

        //include
        ans.push_back(nums[i]);
        allsubsets(nums, ans, i+1,subsets);

        //ecxlude
        ans.pop_back();
        allsubsets(nums, ans, i+1,subsets);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> subsets;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        allsubsets(nums,ans,0,subsets);
        vector<vector<int>> result(subsets.begin(), subsets.end());
        
        return result;
    }
};