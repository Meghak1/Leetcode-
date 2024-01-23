
class Solution {
public:
    int maxLength(vector<string>& arr) {
      vector<int> unique_masks={0};
      int max_len=0;
      for (const string& str:arr) {
         int mask=0;
         bool is_unique=true;

        for (char ch:str) {
          int bit=1<<(ch-'a');
          if ((mask & bit)>0) {
             is_unique = false;
             break;
             }
             mask=mask|bit;
           }

         if (!is_unique)
            continue;

         int n=unique_masks.size();
         for (int i=0; i<n; ++i) {
           if (((unique_masks[i])& mask)==0) {
                                                       unique_masks.push_back(unique_masks[i] | mask);
        max_len=max(max_len,countBits(unique_masks.back()));
            }
          }
        }
     return max_len;
   }

private:
    int countBits(int num) {
        int count=0;
        while (num) {
          count+=num&1;
          num>>=1;
        }
       return count;
    }
};
