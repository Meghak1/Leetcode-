class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
       if(n<=1) return 0;
       int Mprofit=0;
       int mprice=prices[0];
       for(int i=1;i<n;++i) {
           mprice=min(mprice,prices[i]);
           Mprofit=max(Mprofit,prices[i]-mprice);
       }  
       return Mprofit;
    }
};
