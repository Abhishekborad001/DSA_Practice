class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<int> arr;
        long long result = 1;
        arr.push_back(1);  // C(n, 0) is always 1
        
        for(int i = 1; i <= rowIndex; i++) {
            result = result * (rowIndex - i + 1);
            result = result / i;
            arr.push_back((int)(result )); 
        }
        return arr;
    }
};