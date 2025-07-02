// User function Template for C++
class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int l=0, r=arr.size()-1;
        int ans = arr.size();
        while(l<=r){
            int mid = l + (r-l)/2;
            
            if(arr[mid]>=target){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
        
    }
};
