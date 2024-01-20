class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int MOD=1000000007;
        int n=arr.size();
        long result=0;

        vector<int> stack;
        for (int i=0; i<=n; ++i) {
           while (!stack.empty() && (i==n || arr[stack.back()]>arr[i])) {
             int j=stack.back();
             stack.pop_back();
             int prev=stack.empty() ? -1:stack.back();
             result=(result+(long long)arr[j] * (j-prev) * (i-j)) % MOD;
            }
         stack.push_back(i);
      }
     return result;
    }
};
