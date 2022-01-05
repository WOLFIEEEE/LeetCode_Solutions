// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	long long int prime_Sum(int n){
   	    vector<bool> check(n+1 , true);
   	    
   	    for(long long int i = 2 ; i*i <= n ; i++)
   	    {
   	        if(check[i])
   	        for(long long int  j = i*i ; j <= n ; j = j+i)
   	        {
   	            check[j] = false;
   	        }
   	    }
   	    
   	    long long int  sum = 0;
   	    for(long long int  i =2; i <= n ; i++)
   	    {
   	        if(check[i])
   	        {
   	            sum = sum + i;
   	        }
   	    }
   	    
   	    return sum;
   	    // Code here
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends