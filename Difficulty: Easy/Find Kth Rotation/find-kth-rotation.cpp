// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        
        
        int l=0, r=arr.size()-1;
        int ans = INT_MAX;
        int index = -1;

        while(l<=r){
            int mid = l + (r-l)/2;

            if(arr[l]<=arr[r]){
                if(arr[l]<ans){
                    ans = arr[l];
                    index = l;
                }
                break;
            }

            //left part sorted
            if(arr[l]<=arr[mid]){
                if(arr[l]<ans){
                    ans = arr[l];
                    index = l;
                }
                l=mid+1;
            }

            // right part sorted
            else{
                if(arr[mid]<ans){
                    ans = arr[mid];
                    index=mid;
                }
                
                r=mid-1;
            }
            
        }
        return index;
    }
};
