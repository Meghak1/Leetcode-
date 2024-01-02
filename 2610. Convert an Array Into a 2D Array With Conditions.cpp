class Solution {
public:
    vector<vector<int>>findMatrix(vector<int>& nums) {
        unordered_map<int,int>map;
        int count=0;
        for(auto n:nums) {
          map[n]++;
          count=max(count,map[n]);
        }
      vector<vector<int>> arr(count);
        for(auto& enterd:map) {
            int n=enterd.first;
            int occurance=enterd.second;
          for(int i=0;i<occurance;i++) 
          {
              arr[i].push_back(n);
          }
        }
      return arr;
   }
};
