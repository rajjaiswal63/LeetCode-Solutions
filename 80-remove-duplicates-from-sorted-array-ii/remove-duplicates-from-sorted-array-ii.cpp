class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return n;
        int x=2;
        for(int i=2; i<nums.size(); i++){
            if(nums[i]!=nums[x-2]){
                nums[x]=nums[i];
                x++;
          
            }
        }
        return x;
    }
};