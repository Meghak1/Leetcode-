class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int,int> count;
    unordered_set<int> occurrence_unique;

    for (int num:arr) {
            count[num]++;
        }

    for (const auto& pair:count) {
         if (!occurrence_unique.insert(pair.second).second)    {
                return false;
        }
      }
return true;
   }
};
