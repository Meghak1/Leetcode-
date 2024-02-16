class Solution {

public:

    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        unordered_map<int, int> freq_map;

        for (int num : arr) {

            freq_map[num]++;

        }



        vector<int> frequencies;

        for (const auto& pair : freq_map) {

            frequencies.push_back(pair.second);

        }



        sort(frequencies.begin(), frequencies.end());



        int unique_count = frequencies.size();

        for (int freq : frequencies) {

            if (k >= freq) {

                k -= freq;

                unique_count--;

            } else {

                break;

            }

        }



        return unique_count;

    }

};
