class Solution {
public:
    
    
bool isValid(vector < vector < char >> & board, int row, int col, char c) {
  for (int i = 0; i < 9; i++) {
    if (board[i][col] == c)
      return false;

    if (board[row][i] == c)
      return false;

    if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
      return false;
  }
  return true;
}
    
    bool solve( vector<vector<char>>& board , vector<char> nums)
    {
        for(int i = 0 ; i <9 ; i++)
        {
            for(int j = 0 ; j <9 ; j++)
            {
                if(board[i][j] == '.')
                {
                    for(auto it:nums)
                    {
                       
                        if(isValid(board , i , j , it))
                        {
                            board[i][j] = it;
                            if(solve(board , nums)) return true;
                            else board[i][j] = '.';
                        }
                    }
                    
                    return false;
                }
            }
        }
        
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        
        vector<char> nums = {'1','2','3','4','5','6','7','8','9'};
        
        solve(board, nums);
    }
};