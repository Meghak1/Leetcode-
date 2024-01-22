class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate=-1,missing=-1;
   for (int expectedValue=1; expectedValue<=nums.size(); ++expectedValue) {
           int count=0;
            
        for (int num:nums) {
            if (num==expectedValue) {
                count++;
          }
        }

        if (count==2) {
              duplicate=expectedValue;
          } 
        else if (count==0) {
              missing=expectedValue;
          }
        }
        
        return {duplicate,missing};
    }
};
