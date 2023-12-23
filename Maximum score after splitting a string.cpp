class Solution {
public:
    int maxScore(string s) {
    int maxScore=0;
    int lzero=0,rones0;
    for(char c:s) {
        if(c=='1') {
            rones++;
        }
    }
    for(int i=0;i<s.size()-1;++i) {
        if(s[i]=='0') {
            lzero++;
        } 
        else 
        {
        rones--;
        }
        maxScore=max(maxScore,lzero+rones);
    }

    return maxScore;
    }
};
