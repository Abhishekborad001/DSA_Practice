class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int>mpp;

        for(int num:nums){
            mpp[num]++;
        }
        for (auto& [num, count] : mpp) {
            if (count % 2 != 0)
                return false;
        }

        return true;

    }
};