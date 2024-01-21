class Solution {
public:
    int rob(vector<int>& nums) {
     int n=nums.size();
     if (n==0) return 0;
     if (n==1) return nums[0];

     int prev=nums[0];
     int curr=max(nums[0], nums[1]);

     for (int i=2; i<n; ++i) {
        int temp=curr;
        curr=max(curr,prev+nums[i]);
        prev=temp;
        }
    return curr;
    }
};
