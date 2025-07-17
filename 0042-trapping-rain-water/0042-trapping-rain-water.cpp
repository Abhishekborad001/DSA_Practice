class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n);
        vector<int> right(n);
        int ans=0;

        

        left[0] = height[0];
        for(int i=1;i<n;i++){
            left[i] = max(left[i-1],height[i]);
        }

        right[n-1]=height[n-1];
        for(int j=n-2 ; j>=0;j--){
            right[j]=max(right[j+1],height[j]);
        }

        for(int k=1;k<n-1;k++){
            ans += (min(left[k],right[k]) - height[k]);
        }
        return ans;
    }
    
};