class MedianFinder {
public:
    priority_queue<int> maxq;
    priority_queue<int , vector<int> , greater<int>> minq;
    int size = 0;
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        size++;        
        int maxsize = maxq.size();
        int minsize = minq.size();
        
        
        if(maxsize == 0)
        {
            maxq.push(num);
        }else if(maxsize == minsize)
        {
            if(num < minq.top())
            {
                maxq.push(num);
            }else
            {
                int temp = minq.top();
                minq.pop();
                maxq.push(temp);
                minq.push(num);
            }
        }else
        {
            if(num > maxq.top())
            {
                minq.push(num);
            }else
            {
                int temp = maxq.top();
                maxq.pop();
                maxq.push(num);
                minq.push(temp);
            }
        }
    }
    
    double findMedian() {
        
        if(size%2 == 0) 
        {
            return (maxq.top()+minq.top())/2.0;
        }else
        {
            return maxq.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */