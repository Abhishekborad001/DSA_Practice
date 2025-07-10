class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n=arr.size();
        int cnt=0;
        unordered_map<int, int> mpp;
        int xr=0;
        for(int i=0;i<n;i++){
            xr = xr ^ arr[i];
            cnt += mpp[xr ^ k];
            
            if(xr==k) cnt++;
            
            mpp[xr]++;
        }
        return cnt;
    }
};