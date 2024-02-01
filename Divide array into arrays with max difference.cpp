class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < size; i += 3) {
            if (i + 2 < size && nums[i + 2] - nums[i] <= k) {
                result.push_back({ nums[i], nums[i + 1], nums[i + 2] });
            }
            else {
                
                return {};
            }
        }

      return result;
        
    }
};
