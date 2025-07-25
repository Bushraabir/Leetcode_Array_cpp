class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2]; 

        for(int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while(j < k) {
                int currSum = nums[i] + nums[j] + nums[k];

                
                if(abs(currSum - target) < abs(closestSum - target)) {
                    closestSum = currSum;
                }

                
                if(currSum < target) {
                    j++; 
                }
                else {
                    k--; 
                }
            }
        }

        return closestSum;
    }
};
