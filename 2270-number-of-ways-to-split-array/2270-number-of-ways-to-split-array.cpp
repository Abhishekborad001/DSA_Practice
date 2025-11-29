class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long total=0;
        int ans=0;
        for(int i=0; i<n; i++){
            total += nums[i];
        }
        long long s=0;
        for(int i=0; i<n-1; i++){
            s += nums[i];
            if(total - s <= s){
                ans++;
            }
        }
        return ans;
    }
};