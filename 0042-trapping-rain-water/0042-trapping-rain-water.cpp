class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left = 1;
        int right = n-2;

        int lmax = height[0];
        int rmax = height[n-1];

        int ans=0;

        while(left<=right){
            if(rmax<=lmax){
                ans += max(0,rmax-height[right]);

                rmax = max(rmax,height[right]);
                right--;
            }
            else{
                ans += max(0,lmax-height[left]);

                lmax = max(lmax,height[left]);
                left++;
            }
        }
        return ans;

    }
    
};