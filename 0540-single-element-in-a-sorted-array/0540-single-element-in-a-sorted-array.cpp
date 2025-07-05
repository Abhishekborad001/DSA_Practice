class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if(nums[1]!=nums[0]) return nums[0];
        if(nums[n-2]!=nums[n-1]) return nums[n-1];

        // (even,odd) element is on right half
        // (odd,even) element is on left half

        int l=1, r=n-2;

        while(l<=r){
            int mid = l +(r-l)/2;

            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            // we are at left side
            if((mid%2==0 && nums[mid+1]==nums[mid]) || (mid%2==1) && nums[mid]==nums[mid-1]) {
                l=mid+1;
            }
            // we are at right side
            else{
                r=mid-1;
            }
        } 
        return 0;
    }
};