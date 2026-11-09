class Solution {
public:
    void rev(vector<int>& nums, int start, int end){
        reverse(nums.begin()+start, nums.begin()+end);
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
       rev(nums,0,n);
       rev(nums,0,k);
       rev(nums,k,n);
    }
};
//n=6
//k=3
//1234567
//7654321
//
//