class Solution {
public:
    
     static bool comp(vector<int> &a,vector<int> &b){
        if(a[0]!=b[0])
            return a[0]>b[0];
        return a[1]<b[1];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        vector<vector<int>> props(properties);
        sort(props.begin() , props.end() , comp);
        
         // for(auto it:props) cout << it[0] << " " << it[1] << endl;
        
        int size = properties.size();
        
        int count = 0;
        
        int maxx = INT_MIN;
        for(auto it:props)
        {
            if(maxx > it[1]) count++;
            else maxx =  it[1];
        }
        
        return count;
        
    }
};