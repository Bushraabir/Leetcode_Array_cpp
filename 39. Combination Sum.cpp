class Solution {
public:

    void combination( int index, int Size ,int currSum , int target , vector<int>& ds , vector<vector<int>>& ans , vector<int>& arr ){
        if(currSum > target) return; // early stopping

        if(index == Size){
            if(currSum == target){
                ans.push_back(ds);
            }
            return;
        }

        // Take current element (can reuse)
        ds.push_back(arr[index]);
        combination(index, Size, currSum + arr[index], target, ds, ans, arr);
        ds.pop_back();

        // Skip current element
        combination(index + 1, Size, currSum, target, ds, ans, arr);

        }



    

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        int Size = candidates.size();
        combination( 0 , Size , 0 , target , ds , ans , candidates );

        return ans;
        
    }
};