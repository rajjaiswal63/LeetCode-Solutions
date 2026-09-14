class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums) mp[x]++;

        vector<pair<int,int>>v(mp.begin(),mp.end());

        sort(v.begin(),v.end(),[](auto &a, auto &b){
            return a.second>b.second;
        });
        return v[0].first;
    }
};