

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n=arr.size();
        int maxi=-1;
        
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=maxi){
                maxi=arr[i];
                ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(), ans.end());

        return ans;
        
        
    }
};