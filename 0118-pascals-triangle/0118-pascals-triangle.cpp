class Solution {
public:
    vector<int> GenRow(int r) {
        vector<int> row;
        row.push_back(1);

        int ans = 1;

        for (int col = 1; col < r; col++) {
            ans = ans * (r - col);
            ans = ans / col;
            row.push_back(ans);
        }

        return row;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int i = 1; i <= numRows; i++) {
            ans.push_back(GenRow(i));
        }

        return ans;
    }
};