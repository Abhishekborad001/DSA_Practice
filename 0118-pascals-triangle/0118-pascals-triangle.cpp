class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        // loop for each row
        for(int row =1; row<=numRows;row++){
            vector<int> temp_ans;
            long long res=1;
            temp_ans.push_back(res);

            // loop for single row , each column
            for(int col=1;col<row;col++){
                res *= (row-col);
                res /= col;
                temp_ans.push_back(res);
            }
            ans.push_back(temp_ans);

        }
        return ans;
    }
};