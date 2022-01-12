class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int a = matrix.size();
        int b=matrix[0].size();
        
        int row=0 ;
        for(int i=0;i<a;i++)
        {
            if(target <= matrix[i][b-1])
            {
                row = i;
                break;
            }
        }
        
        for(int i=0;i<b;i++)
        {
            if(target == matrix[row][i])
            {
                return true;
            }
        }
        return false;
        
    }
};