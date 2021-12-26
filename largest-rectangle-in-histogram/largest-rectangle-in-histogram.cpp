class Solution {
public:
    void print(vector<int> a)
    {
        for(auto it :a) cout << it << endl;
    }
    int largestRectangleArea(vector<int>& h) {
        
        int n = h.size();
        vector<int> ls(n , 0);
        vector<int> rs(n , 0);
        
        stack<int> right;
        stack<int> st;
        
        for(int i = n-1 ; i >= 0 ; i--)
        {
            if(st.empty())
            {
                st.push(i);
                rs[i] = n;
                continue;
            }
            
            while(!st.empty() && h[st.top()] >= h[i])
            {
                st.pop();
            }
            
            if(st.empty())
            {
                rs[i] = n;
            }else
            {
                rs[i] = st.top();
            }
            
            st.push(i);
        }
        
        
        for(int i =  0; i < n ; i++)
        {
            if(right.empty())
            {
                right.push(i);
                ls[i] = -1;
                continue;
            }
            
             while(!right.empty() && h[right.top()] >= h[i])
            {
                right.pop();
            }
            
            if(right.empty())
            {
                ls[i] = -1;
            }else
            {
                ls[i] = right.top();
            }
            
            right.push(i);
        }
        
        int maxi = INT_MIN;
        
        for(int i = 0 ; i < n ; i++)
        {
            maxi = max(maxi , h[i]*(rs[i]-ls[i]-1));
        }
        return maxi;
        
    }
};