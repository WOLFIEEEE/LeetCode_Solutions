class Solution {
public:
    
    bool binarysearch(vector<int> ch , int target , int low , int high )
    {
        while(low <= high)
        {
            int mid = (low+high)/2;
            
            if(ch[mid] == target) return true;
            else if(ch[mid] > target) high = mid-1;
            else low = mid+1;
        }
        
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int  row = matrix.size();
        int col = matrix[0].size();
        
        for(int i = 0 ; i < row ; i++)
        {
            if(matrix[i][0] <= target && target <= matrix[i][col-1])
            {
                if(binarysearch(matrix[i] , target , 0 , col-1)) return true;
            }
        }
        
        return false;
        
    }
};