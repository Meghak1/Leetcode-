class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()) {
            return false;
        }

        unordered_map<char,int> freq1,freq2;
        unordered_set<char> chars1(word1.begin(),word1.end()),chars2(word2.begin(),word2.end());

        for (char c:word1) freq1[c]++;
        for (char c:word2) freq2[c]++;

        if (chars1!=chars2) {
            return false;
        }

      vector<int> freqCount1,freqCount2;
        for (auto& entry:freq1)           
          freqCount1.push_back(entry.second);
        for (auto& entry:freq2) 
          freqCount2.push_back(entry.second);

      sort(freqCount1.begin(),freqCount1.end());
      sort(freqCount2.begin(),freqCount2.end());
      return freqCount1 == freqCount2;
    }
};
