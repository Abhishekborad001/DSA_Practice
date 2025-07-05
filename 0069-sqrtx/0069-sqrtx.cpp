class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        int l=0, r=(x/2)+1;
        int ans=0;

        while(l<=r){
            long mid = l + (r-l)/2;

            if(mid*mid >x){
                r=mid-1;
            }
            else{
                ans = mid;
                l=mid+1;
            }
        }
        return ans;
    }
};