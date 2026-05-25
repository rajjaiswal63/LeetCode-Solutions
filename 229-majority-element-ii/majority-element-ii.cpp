class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map<int,int>m;
        vector<int>ans;

        int n=nums.size();
        int elementMoreThan=(n/3);

        for(auto x:nums) m[x]++;

        for(auto x:m){
            if(x.second > elementMoreThan){
                ans.push_back(x.first);
            }
        }
        
        return ans;
        
    }
};