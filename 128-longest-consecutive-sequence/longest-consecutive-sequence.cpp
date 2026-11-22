
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (int num : st) {
            // Check if num is the starting point
            if (!st.count(num - 1)) {
                int current = num;
                int length = 1;

                // Find consecutive numbers
                while (st.count(current + 1)) {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};
