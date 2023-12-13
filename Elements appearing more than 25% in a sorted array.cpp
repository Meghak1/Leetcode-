class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
int result=n/4;
for (int i=0;i<n-result;++i) {
if(arr[i]==arr[i+result]) {
     return arr[i];
 }
 }
return -1; 
    }
};
