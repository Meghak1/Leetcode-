class Solution {
private:
    bool areAnagrams(const string& s1, const string& s2) {
        if (s1.size() != s2.size()) {
            return false;
        }

        string sortedS1 = s1;
        string sortedS2 = s2;
        sort(sortedS1.begin(), sortedS1.end());
        sort(sortedS2.begin(), sortedS2.end());

        return sortedS1 == sortedS2;
    }

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        for (const string& str : strs) {
            bool found = false;
            for (vector<string>& group : result) {
                if (areAnagrams(group[0], str)) {
                    group.push_back(str);
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.push_back({str});
            }
        }

        return result;
    }
};
