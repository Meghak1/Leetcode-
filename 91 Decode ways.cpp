class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
     if(n==0 || s[0]=='0') {
        return 0;
    }

    int prev1=1,prev2=1;

    for(int i=1;i<n;++i) 
      {
        int current=0;
        if(s[i]!='0') {
            current+=prev2;
      }
      int digits=stoi(s.substr(i-1,2));
        if(digits>=10 && digits<=26) 
        {
            current+=prev1;
        }

        prev1=prev2;
        prev2=current;
    }

    return prev2;
    }
};
