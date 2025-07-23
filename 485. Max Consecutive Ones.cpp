class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count1 = 0;
        int max_count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count1++;
                max_count = max(max_count, count1);
            } else {
                count1 = 0; // reset if 0 is found
            }
        }

        return max_count;
    }
};
