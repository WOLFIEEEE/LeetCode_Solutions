class Solution {
public:
    int bagOfTokensScore(vector<int>& token, int power) {
        
        sort(token.begin() , token.end());
        
        int score = 0;
        int start = 0;
        int end = token.size()-1;
        int maxx = 0;
        
        while(start <= end && token[start] <= power)
        {
            cout << score << endl;
            
            power -= token[start];
            score++;
            start++;
            
            maxx = max(maxx , score);
        }
        
        while(start <= end)
        {
            if(token[start] <= power)
            {
                power -= token[start];
                score++;
                start++;
            }else if(score > 0)
            {
                power += token[end];
                end--;
                score--;
            }else
            {
                break;
            }
            
            
             maxx = max(maxx , score);
        }
        
        return maxx;
        
    }
};