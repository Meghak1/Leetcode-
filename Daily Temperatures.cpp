class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0);
        stack<int> stackIndex;

        for (int i = n - 1; i >= 0; --i) {
            while (!stackIndex.empty() && temperatures[stackIndex.top()] <= temperatures[i]) {
                stackIndex.pop();
            }
            if (!stackIndex.empty()) {
                result[i] = stackIndex.top() - i;
            }
            stackIndex.push(i);
        }

        return result;
    }
};
