class StockSpanner {
public:
    stack<pair<int,int>> st;
    int day = 1;
    StockSpanner() {
        
    }
    
    int next(int price) {
        day=1;
        while(!st.empty() && price >= st.top().first)
        {
            day += st.top().second;
            st.pop();
        }
        
        if(!st.empty())
        cout << st.top().first << " " << st.top().second << endl;
        
        st.push({price, day});
        return st.top().second;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */