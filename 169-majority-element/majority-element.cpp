class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int idx=nums.size()/2;
        return nums[idx];
    }
};