class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res=0;
        for(char x :columnTitle)
        {
            int d=x-'A'+1;
            res=res*26+d;
        }
        return res;
        
    }
};
