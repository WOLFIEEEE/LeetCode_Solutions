class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int i = 0;
        int j = arr.size()-1;
        
        while(abs(i-j) >= k)
        {
            
            // cout << abs(arr[i]-x) << " " << abs(arr[j]-x) << endl;
            //  cout << i << " " << j << endl;
            if(abs(arr[i]-x) < abs(arr[j]-x))
            {
                j--;
            }else if(abs(arr[i]-x) > abs(arr[j]-x))
            {
                i++;
            }else
            {
                if(arr[i] < arr[j])
                {
                    j--;
                }else
                {
                    i++;
                }
            }
        }
        
        vector<int> ans;
        
        cout << i << j << endl;
        int lastindex = arr.size()-1;
        
        ans.assign(arr.begin()+i , arr.end()-lastindex+j);
        
        return ans;
        
        
        
    }
};