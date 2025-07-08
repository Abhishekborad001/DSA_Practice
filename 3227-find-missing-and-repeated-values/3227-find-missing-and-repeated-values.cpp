class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int len = grid.size(); 
        int n = len * len;

        long long sn = (long long)(n * (n + 1)) / 2;
        long long s2n = (1LL * n * (n + 1) * (2 * n + 1)) / 6;

        long long s=0;
        long long s2=0;

        for(int i=0; i<len;i++){
            for (int j=0;j<len;j++){
                s += grid[i][j];
                s2 += (long long) grid[i][j] *(long long) grid[i][j];  
            }
        } 
        // val1 = s-sn -- x-y
        long long val1 = s-sn;
        // val2 = s2-s2n -- x^2-y^2
        long long val2 = s2-s2n;

        // x+y
        val2 = val2/val1;

        // (x+y) + (x-y) to find val of x

        long long x = (val2 + val1)/2;

        // use x-y to find y
        long long y = x-val1;

        return{int(x),int(y)};
    }
};