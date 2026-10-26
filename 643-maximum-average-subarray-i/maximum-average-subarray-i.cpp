class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN;
        int n=nums.size();

        double sum=0;
        for(int i=0; i<k; i++) {
            sum +=nums[i];
        }
        ans=max(ans,sum/k);

        int i=0, j=k;
        while(j<n){
            sum-=nums[i];
            sum+=nums[j];
            ans=max(ans,sum/k);
            i++;
            j++;
        }
        return ans;
    }
};