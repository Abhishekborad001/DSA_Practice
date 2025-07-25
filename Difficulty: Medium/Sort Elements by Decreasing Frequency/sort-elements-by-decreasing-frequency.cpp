class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& nums) {
        unordered_map<int,int> mpp;
    

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b){
            if(mpp[a] == mpp[b]) return a<b;
            return mpp[a] > mpp[b];
        });
        return nums;
        
    }
};