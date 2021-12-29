class Solution {
public:
    
    double cal(vector<int> a , vector<int> b , int m , int  n , bool odd , int k)
    {
        int low = max(0 , k-n);
        int high = min(k , m);
        
        while(low <= high)
        {
            
            cout << low << high << endl;
            int cut1 = (low + high)/2;
            int cut2 = k - cut1;
            
            int l1 = cut1 == 0 ? INT_MIN : a[cut1-1];
            int l2 = cut2 == 0 ? INT_MIN : b[cut2-1];
            int r1 = cut1 == m ? INT_MAX : a[cut1];
            int r2 = cut2 == n ? INT_MAX : b[cut2];
            
            
            if(l1 <= r2 && l2 <= r1)
            {
                if(odd)
                {
                    return max(l1 , l2);
                }else
                {
                    return ((double)(max(l1 , l2)) + (double)(min(r1 , r2)))/ (double)2;
                }
            }
            
            if(l1 > r2)
            {
                high = cut1-1;
            }else
            {
                low = cut1+1;
            }
        }
        
        return 1.0;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int a = nums1.size();
        int b = nums2.size();
        bool odd = false;
        
        if((a+b)%2 != 0) odd = true;
        
        int k = (a+b)/2;
        
        if(odd)
        {
            k =k+1;    
        }
        
        // cout << k << endl;
        
        if(a < b)
        {
            return cal(nums1 , nums2 , a , b , odd , k);
        }
        
        
        return cal(nums2 , nums1 , b , a , odd , k);
        
    }
};