class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freq(26,0);
        
        for (char ch:s) ++freq[ch-'a'];
        for (char ch:t) --freq[ch-'a'];

    return accumulate(freq.begin(),freq.end(),0,[](int sum, int count) {
    return sum+abs(count);
      }) / 2;
   }
};
