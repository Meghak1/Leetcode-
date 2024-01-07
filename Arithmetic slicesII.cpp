class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
    int n=nums.size();
    int result=0;
    vector<unordered_map<long long,int>> dp(n);

    for(int i=0;i<n;++i) {
        for(int j=0;j<i;++j) {
           long long difference=static_cast<long   long>(nums[i])-nums[j];
          
           result+=dp[j][difference];
           dp[i][difference]+=dp[j][difference]+1;
          
           }
        }
     return result;
   }
};
