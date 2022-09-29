class MyQueue {
public:
    stack<int> s1;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        
        int size = s1.size()-1;
        stack<int> s2;
        while(s2.size() != size)
        {
            s2.push(s1.top());
            s1.pop();
        }
        
        int a = s1.top();
        s1.pop();
        
        
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        
        return a;
        
    }
    
    int peek() {
        stack<int> s2 = s1;
        
        int a;
        
        while(!s2.empty())
        {
            a = s2.top();
            s2.pop();
        }
        
        return a;
    }
    
    bool empty() {
        
        return s1.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */