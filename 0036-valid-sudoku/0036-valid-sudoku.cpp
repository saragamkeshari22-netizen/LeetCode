class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            bool row[10] = {false};
            bool col[10] = {false};

            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    int n = board[i][j] - '0';
                    if(row[n]) return false;
                    row[n] = true;
                }

                if(board[j][i] != '.') {
                    int n = board[j][i] - '0';
                    if(col[n]) return false;
                    col[n] = true;
                }
            }
        }

        for(int i = 0; i < 9; i += 3) {
            for(int j = 0; j < 9; j += 3) {
                bool box[10] = {false};

                for(int r = i; r < i + 3; r++) {
                    for(int c = j; c < j + 3; c++) {
                        if(board[r][c] != '.') {
                            int n = board[r][c] - '0';

                            if(box[n]) return false;
                            box[n] = true;
                        }
                    }
                }
            }
        }

        return true;
    }
};