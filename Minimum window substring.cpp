class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.length() < t.length()) {
            return "";
        }

        unordered_map<char, int> count;
        int charRequired = t.length();
        int start = 0, end = 0, minimum = INT_MAX, index = 0;

        for (char c : t) {
            count[c]++;
        }

        while (end < s.length()) {
            if (count.find(s[end]) != count.end() && count[s[end]] > 0) {
                charRequired--;
            }

            count[s[end]]--;
            end++;
            while (charRequired == 0) {
                if (end - start < minimum) {
                    index = start;
                    minimum = end - start;
                }

                count[s[start]]++;
                if (count[s[start]] > 0) {
                    charRequired++;
                }

                start++;
            }
        }

        return minimum == INT_MAX ? "" : s.substr(index, minimum);
    }

};
