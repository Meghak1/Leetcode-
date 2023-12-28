class Solution {
public:
    int getLengthOfOptimalCompression(string s, int k) {
        int n=s.length();
        vector<vector<int>>str(110,vector<int>(110, 9999));
        str[0][0]=0;
        for(int i=1;i<=n;++i) {
            for(int j=0;j<=k;++j) {
                int cnt=0,del=0;
              for(int l=i;l>=1;--l) {
                 if(s[l-1]==s[i-1]) 
                    ++cnt;
                 else 
                    ++del;
           if(j-del>=0) {
              int len=(cnt>=100) ? 3:(cnt>=10) ? 2:(cnt>=2) ? 1:0;
              str[i][j]=min(str[i][j],str[l-1][j-del]+1+ len);
                    }
                }
          if(j>0)
             str[i][j]=min(str[i][j],str[i-1][j-1]);
          }
       }

        return str[n][k];
    }
};
