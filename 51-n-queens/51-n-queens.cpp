class Solution {
public:
    
    
    bool check(vector<string> board , int n , int i  , int j)
    {
            
        //check vertical top side
        
            for(int k = 0 ; k < i ; k++)
            {
                if(board[k][j] == 'Q') return false;
            }
        
        
        // check left top diagonal 
        
        
            int k = i-1;
            int l = j-1;
        
            while(k >= 0 && l>= 0)
            {
                
                if(board[k][l] == 'Q') return false;
                k--;
                l--;
            }
        
        
        
        
        // check right top diagonal
        
            k = i-1;
            l = j+1;
        
            while(k >= 0 && l < n)
            {
                if(board[k][l] == 'Q') return false;
                k--;
                l++;
            }
        
        return true;
        
        //check 
    }
    
    
    vector<vector<string>> ans;
    void solve( vector<string> &board, int n , int row , int total)
    {
        
        
        
        if(row >= n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int i = 0 ; i < n ; i++)
        {
            
            
            if(check(board ,  n , row , i ))
            {
                board[row][i] = 'Q';
                solve(board , n , row+1 , total+1);
                board[row][i] = '.';
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string> board(n);
        string s(n , '.');
        
        for(int i = 0 ; i < n ; i++)
        {
            board[i] = s;
        }
        
        
        solve(board , n , 0 , 0);
        
        return ans;
        
    }
};