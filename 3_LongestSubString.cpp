//3.Longest Substring Without Repeating Characters

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
                
        vector<int> v(256,-1);
        int m=0;
        int result=0;
        int length=s.length();
        for(int current=0;current<length;current++){
            char & ch=s[current];
            m   =   max(m, v[ch]+1);            
            result = max(result,    current-m +1 );
            v[ch]=current;        
        }
        return result;
    }
};
