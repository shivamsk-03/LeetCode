class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minpric = INT_MAX;
        int maxpro = 0;
        for(int i=0;i<prices.size();i++){
            minpric = min(prices[i],minpric);
            maxpro = max(maxpro,prices[i] - minpric);
        }
        return maxpro;
    }
};