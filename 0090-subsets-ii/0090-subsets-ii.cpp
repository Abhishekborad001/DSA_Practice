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

        ans.pop_back();
        //ecxlude
        int index = i+1;
        while(index<nums.size() && nums[index]==nums[index-1]) index++; 
        allsubsets(nums, ans, index,subsets);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> subsets;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        allsubsets(nums,ans,0,subsets);
               
        return subsets;
    }
};