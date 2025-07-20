class Solution {
public:

    void findPer(vector<int>&nums, vector<int>&ans, vector<vector<int>> &res, vector<int>&freq){

        if(ans.size()==nums.size()){
            res.push_back({ans});
            return;
        }

        for(int i=0; i<nums.size(); i++){
            if(!freq[i]){
                ans.push_back(nums[i]);
                freq[i]=1;
                findPer(nums, ans, res,freq);
                freq[i]=0;
                ans.pop_back();

            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> res;
        vector<int>freq(nums.size(),0);

        findPer(nums, ans, res,freq);

        return res;
    }
};