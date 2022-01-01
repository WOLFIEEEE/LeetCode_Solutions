class Solution {
public:
    vector<int> keep;
    vector<int> change;
    Solution(vector<int>& nums) {
        keep = nums;
        change = nums;
    }
    
    vector<int> reset() {
        return keep;
    }
    
    vector<int> shuffle() {
        int n = change.size();
        int a = rand() % n ;
        int b = rand() % n ;
        cout << a << b << endl;
        swap(change[a] , change[b]);
        return change;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */