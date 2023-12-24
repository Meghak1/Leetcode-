class Solution {
public:
    int minOperations(string s) {
    int zero=0;
    int one=0;
    for(int i=0;i<s.size();++i) {
      if(i%2==0) 
        {
            zero+=(s[i]=='1');
        } 
      else 
        {
            zero+=(s[i]=='0'); 
        }
       if(i%2==0) 
       {
            one+=(s[i]=='0');
       } 
       else   
       {
            one+=(s[i]=='1'); 
        }
    }
   return min(zero,one);
  }
};
