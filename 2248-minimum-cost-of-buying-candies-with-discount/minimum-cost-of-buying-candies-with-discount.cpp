class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());

        int n=cost.size();
        int counter=0;
        int totalCost=0;
        for(int i=n-1; i>=0; i--){
            counter++;
            if(counter==3) {
                counter=0;
                continue;
            }
            totalCost+=cost[i];
        }
        return totalCost;
    }
};