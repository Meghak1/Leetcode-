class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;

        for (int i = 1; i <= 9; ++i) {
            int num = i;

            while (num <= high && num % 10 != 0) {
                if (num >= low) {
                    result.push_back(num);
                }

                num = num * 10 + (num % 10 + 1);
            }
        }

        sort(result.begin(), result.end());
        return result;
    }
};
