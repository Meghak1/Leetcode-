class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
    const int range=26;
    vector<int> occur(range,-1);
    int mlength=-1;
    for(int i=0;i<s.length();++i) {
      if(occur[s[i]-'a']!=-1)
       {
        int length=i-occur[s[i]-'a']-1;
        mlength=max(mlength,length);
        } 
      else 
      {
        occur[s[i]-'a']=i;
      }
    }
  return mlength;
 }
};
