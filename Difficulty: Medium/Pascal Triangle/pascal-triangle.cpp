
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int> arr;
        for(int i=0;i<n;i++){
            long long result = 1;
            for(int j=0;j<i;j++){
                result = result * (n-1-j);
                result = result / (j+1);
                
            }
            arr.push_back(result);
        }
        return arr;
        
    }
};
