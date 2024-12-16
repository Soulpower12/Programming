class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int small =0;
        int d = 0;
       for(int i=0;i<prices.size();i++)
       {
           if (prices[i]<prices[small])
                small = i;
            
            if(prices[i]-prices[small] > d)
                d = prices[i]-prices[small];
       }
       return d;
    }
};
