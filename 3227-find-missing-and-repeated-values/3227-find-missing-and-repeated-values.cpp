class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size() * grid.size();
        vector<int> arr(n + 1, 0);
        int twice=-1;
        int missing=-1;

        for(int i=0;i<grid.size();i++){
            for(int j=0; j<grid.size();j++){
                arr[grid[i][j]]++;
            }
        }

        for(int i=1;i<=n;i++){
            if(arr[i]==2) {
                twice = i;
            }
            if(arr[i]==0){
                missing = i;
            }
        }
        return {twice,missing};
    }
};