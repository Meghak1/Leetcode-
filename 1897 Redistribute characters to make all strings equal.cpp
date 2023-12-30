class Solution {
public:
    bool makeEqual(vector<string>& words) {
    vector<int> chcount(26,0);
     for(const string& word:words) {
        for(char c:word) {
          chcount[c-'a']++;
     }
    }
    for(int count:chcount) {
        if(count%words.size()!=0) {
           return false;
     }
    }
   return true;
  }
};
