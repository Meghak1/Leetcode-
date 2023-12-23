class Solution {
public:
    bool isPathCrossing(string path) {
    unordered_set<long long>s;
    long long hash=0;
    s.insert(hash);
    int x=0,y=0;
    for(char ch:path) {
      if(ch=='N') y++;
      else if(ch=='E') x++;
      else if(ch=='S') y--;
      else x--;
     hash=((long long)x<<32)|(unsigned int)y;
      if(s.count(hash)>0)
        return true;
        s.insert(hash);
        }
   return false;
    }
};
