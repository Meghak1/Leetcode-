class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int num1 = 0, num2 = 0;
for (int i=0; i<nums.size(); ++i) {
int num=nums[i];
if (num>num1) {
num2=num1;
num1=num;
  } 
else if (num>num2) {
 num2 = num;
     }
    }
  return (num1-1)*(num2-1);
  }
};
