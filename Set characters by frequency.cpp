class Solution {
public:
    string frequencySort(string s) {
        int count[256] = {};
        for (char c : s) {
            count[c]++;
        }

        sort(s.begin(), s.end(), [&](char a, char b) {
            return count[a] != count[b] ? count[a] > count[b] : a < b;
        });

        return s;
    }
};
