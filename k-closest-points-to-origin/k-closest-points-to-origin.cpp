class Solution {
public:
    
    static bool comp(vector<int> a , vector<int> b)
    {
        int a1 = a[0]*a[0] + a[1]*a[1];
        int b1 = b[0]*b[0] + b[1]*b[1];
        
        if(a1 <= b1) return true;
        return false;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        sort(points.begin() , points.end() , comp);
        vector<vector<int>> ans;
        ans.assign(points.begin() , points.begin()+k);
        return ans;
        
    }
};