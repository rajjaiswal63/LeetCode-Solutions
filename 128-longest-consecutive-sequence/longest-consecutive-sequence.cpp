class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());

        int maxAns=0;

        for(int x:st){
            if(!st.count(x-1)){
                int curr=x;
                int localAns=1;

                while(st.count(curr+1)){
                    curr++;
                    localAns++;

                   
                }

                 maxAns=max(maxAns,localAns);
            }
        }
        return maxAns;
    }
};