
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int> arr;
        long long result = 1;
        arr.push_back(1);
        for(int i=1;i<n;i++){
            result *= (n-i);
            result/= i;
            arr.push_back(result);
            
        }
        return arr;
        
    }
};
