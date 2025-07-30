class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        vector<int> ans;
        int n= arr.size();
        stack<int> st;
        
        for(int i=n-1; i>=0; i--){
            // Remove all smaller or equal elements
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            
            // If stack is empty, no greater element to right
            if (st.empty()) {
                ans.push_back(-1);
            } else {
                ans.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};