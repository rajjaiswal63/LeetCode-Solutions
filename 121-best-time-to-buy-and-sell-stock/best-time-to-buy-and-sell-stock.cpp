class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), minBhai=INT_MAX, maxProfit=INT_MIN;
        
        for(int x:prices){
            if(x<minBhai) minBhai=x;
            maxProfit=max(maxProfit,x-minBhai);
        }
        return maxProfit;
    }
};