class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int start = 0;
        int end = 0;
        unordered_set<int> seen;
        int n=nums.size();
        int maxSum = 0;
        int curSum=0;

        while(end < n){
            if(seen.count(nums[end]) == 0){
                curSum += nums[end];
                seen.insert(nums[end]);
                maxSum = max(maxSum, curSum);
                end++;
            }
            else{
                while(nums[start] != nums[end]) {
                    curSum -= nums[start];
                    seen.erase(nums[start]);
                    start++;
                }
                curSum -= nums[start];
                seen.erase(nums[start]);
                start++;
            }
        }
        return maxSum;
    }
};