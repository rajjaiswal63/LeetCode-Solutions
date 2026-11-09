class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int ans=INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i=0 ; i<nums.size()-1; i+=2){
            if(nums[i]!=nums[i+1]) {ans= nums[i]; break;}
        }
        if(ans==INT_MIN) return nums[nums.size()-1];
        return ans;
    }
};
//41212
//11224
// ij