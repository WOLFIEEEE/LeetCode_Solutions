class MyCircularQueue {
private:
    vector<int> buffer_;
    int read_;
    int write_;

public:
    MyCircularQueue(int k) : buffer_(k + 1), read_(0), write_(0) {
    }
    
    bool enQueue(int value) {
        if (isFull()) return false;
        buffer_[write_] = value;
        write_ = next(write_);
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        read_ = next(read_);
        return true;
    }
    
    int Front() {
        if (isEmpty()) return -1;
        return buffer_[read_];
    }
    
    int Rear() {
        if (isEmpty()) return -1;
        return buffer_[prev(write_)];
    }
    
    bool isEmpty() {
        return read_ == write_;
    }
    
    bool isFull() {
        return next(write_) == read_;
    }
    
private:
    int next(int i) {
        return (i + 1) % size(buffer_);
    }
    
    int prev(int i) {
        return (i - 1 + size(buffer_)) % size(buffer_);
    }
};