class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        
        stack<int> index;
        h.push_back(0);
        int maxi = 0;
        int size = h.size();
        int area = 0;
        for(int i = 0 ; i < size ; i ++)
        {
            while(!index.empty() && h[index.top()] > h[i])
            {
                int k = index.top();
                index.pop();
                int l;
                if(index.empty())
                {
                    l = -1;
                }else
                {
                    l = index.top();
                }
                
                area = max(area , (i-l-1)*h[k]);  
            }
            
            index.push(i);
        }
        
        return area;
        
    }
};