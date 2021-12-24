class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        
        unordered_map<int,int> map;
        
        stack<int> st;
        
        int n = nums2.size();
        
        for(int i=n-1 ; i>= 0 ; i--)
        {
            if(st.empty())
            {
                st.push(nums2[i]);
                map[nums2[i]] = -1;
                continue;
            }
            
            while( !st.empty() && st.top() < nums2[i])
            {
                cout << st.top() << endl;
                st.pop();
            } 
            
            if(st.empty())
            {
                map[nums2[i]] = -1;
            }else
            {
                map[nums2[i]] = st.top();
            }
            
            st.push(nums2[i]);
        }
        
        vector<int> ans;
        
        for(auto it:nums1)
        {
            ans.push_back(map[it]);
        }
        
        
        return ans;
        
    }
};