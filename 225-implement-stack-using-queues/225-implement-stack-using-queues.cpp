class MyStack {
public:
    queue<int> q1;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        queue<int> q2;
        
        int size = q1.size()-1;
        
        while(q2.size() != size)
        {
            q2.push(q1.front());
            q1.pop();
        }
        
        int a = q1.front();
        
        q1 = q2;
        
        return a;
    }
    
    int top() {
        
        queue<int> q2 = q1;
        
        int a;
        
        while(!q2.empty())
        {
            a = q2.front();
            q2.pop();
        }
        
        return a;
        
    }
    
    bool empty() {
        
        return q1.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */