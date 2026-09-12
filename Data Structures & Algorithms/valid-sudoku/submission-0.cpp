class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();

        vector<unordered_map<char,int>> rows(9), cols(9), boxes(9);

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                char val = board[i][j];

                if(val == '.') continue;

                int boxIndex = (i / 3) * 3 + (j / 3);

                if(rows[i][val] > 0 || cols[j][val] > 0 || boxes[boxIndex][val] > 0){
                    return false;
                }

                rows[i][val]++;
                cols[j][val]++;
                boxes[boxIndex][val]++;
            }
        }

        return true;
    }
};