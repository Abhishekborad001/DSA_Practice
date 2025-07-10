class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        int n=nums.size();
        long long cnt=0;
        unordered_map<int,int>mpp;
        int xr=0;
        for(int i=0;i<n;i++){
            xr = xr^nums[i];
            int x = xr ^ 0;
            cnt += mpp[x];
            if(xr==0) cnt++;
            mpp[xr]++;
        }
        return cnt;
    }
};