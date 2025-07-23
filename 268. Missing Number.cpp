class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0 ;
        int size = nums.size();
        for( int i = 0 ; i < size ; i++ ){
            sum += nums[i];
        }

        return ( size*(size+1)/2)-sum;
    }
};