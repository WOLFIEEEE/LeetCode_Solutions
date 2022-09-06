class Solution {
public:
	void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
		if(n == 0) return;
		int i = 0;
		while(i < m){
			if(arr1[i] <= arr2[0]){
				i++;
			}else{
				swap(arr1[i],arr2[0]);
				sort(arr2.begin(),arr2.end());
			}
		}
		i = m;
		for(int j : arr2) arr1[i++] = j;
	}
};