class NumArray {
public:
vector<int> arr;  

    NumArray(vector<int>& nums) {
        arr.resize(nums.size());
        arr[0]=nums[0];
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            arr[i]=nums[i]+arr[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0) return arr[right];
        return arr[right]-arr[left-1];
    }
};