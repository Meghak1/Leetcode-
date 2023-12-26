class Solution {
public:
  int numRollsToTarget(int n, int k, int target) {
  const int intrange=1000000007;
  vector<vector<int>>memo(n+1,vector<int>(target+1,-1));
  function<int(int,int)>result=[&](int dice,int left)->int      {
        if(dice==0 && left==0) return 1;
        if(dice==0 || left<=0) return 0;
        if(memo[dice][left]!=-1)
        return memo[dice][left];

        int way=0;
        for (int face=1; face<=k;++face)
          way=(way+result(dice-1,left-face))%intrange;
          return memo[dice][left]=way;
        };
      return result(n,target);
  }
};
