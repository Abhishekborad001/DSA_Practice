class Solution {
  public:

    int findFloor(vector<int>& arr, int x) {
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]>x) return i-1;
            
            if(i==(arr.size()-1)) return i;
        }
        return -1;
    }
};
