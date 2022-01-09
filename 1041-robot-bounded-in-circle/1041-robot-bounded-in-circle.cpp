class Solution {
public:
    bool isRobotBounded(string instructions) {
        
        int x = 0 , y = 0 , dx = 0 ,dy = 1;
        
        for(auto s : instructions)
        {
            if(s == 'G')
            {
                x = x+dx;
                y = y + dy;
            }else if(s == 'L')
            {
                swap(dx , dy);
                
                dx = -1*dx;
            }else
            {
                swap(dx, dy);
                
                dy = -1*dy;
            }
        }
        
        
        if(x == 0 && y==0)
        {
            return true;
        }
        
        if(dx != 0 || dy != 1) return true;
        
        return false;
        
    }
};