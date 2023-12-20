class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int m_cost=prices[0]+prices[1];
        if(m_cost<=money) 
        {
        return money-m_cost;
        } 
        else 
        {
            return money;
        }
    }
};
