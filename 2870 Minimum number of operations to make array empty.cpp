class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> map;
        int cnt=0;
        for(int n:nums) map[n]++;
        for(auto next:map) {
            if(next.second==1) return -1;
               cnt+=next.second/3 + (next.second%3 != 0);
        }
  return cnt;
    }
};
