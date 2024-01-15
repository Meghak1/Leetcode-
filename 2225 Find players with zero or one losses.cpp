class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> loss_count;
        set<int> players;

        for (const auto& match:matches) {
            players.insert(match[0]);
            players.insert(match[1]);
            loss_count[match[1]]++;
        }

        vector<int> no_loss,one_loss;

        for (int player:players) {
            if (loss_count[player]==0) {
                no_loss.push_back(player);
            } 
          else if (loss_count[player]==1) {
                one_loss.push_back(player);
            }
        }

        return {no_loss,one_loss};
    }
};
