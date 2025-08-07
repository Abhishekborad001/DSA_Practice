class Solution {
public:
    int countBounded(vector<int>& nums, int bound) {
        int count = 0, cur = 0;
        for (int num : nums) {
            if (num <= bound) {
                cur++;
            } else {
                cur = 0;
            }
            count += cur;
        }
        return count;
    }

    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return countBounded(nums, right) - countBounded(nums, left - 1);
    }
    

};