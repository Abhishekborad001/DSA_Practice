class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int n=arr.size();
        auto lb = lower_bound(arr.begin(), arr.end(), target);
        auto ub = upper_bound(arr.begin(), arr.end(), target);

        // if no element found in vector or lb is not equal to target
        if(lb==arr.end() || *lb !=target) return 0;
        
        
        int first = lb - arr.begin();
        int last = ub - arr.begin() - 1;

        return {last-first+1};

    }
        

};
