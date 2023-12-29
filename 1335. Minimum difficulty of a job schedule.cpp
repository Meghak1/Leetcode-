class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
   int n=jobDifficulty.size();
   if(n<d) return -1;
   vector<vector<int>>arr(n+1,vector<int>(d+1,INT_MAX/2));
   arr[0][0]=0;
   for(int i=1;i<=n;++i) 
   {
    for(int j=1;j<=d;++j)
    {
        int maxDifficulty=0;
        for(int k=i-1;k>=j-1;--k) {
       maxDifficulty=max(maxDifficulty,jobDifficulty[k]);
          arr[i][j]=min(arr[i][j],arr[k][j-1]+maxDifficulty);
     }
    }
   }
   return arr[n][d]==INT_MAX/2 ? -1:arr[n][d];
}
};
