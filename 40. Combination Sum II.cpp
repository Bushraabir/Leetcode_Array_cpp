class Solution {
public:

    void combination(int index, int arrSize, int currSum, int target, vector<int>& ds, vector<vector<int>>& ans, vector<int> & arr) {
        if(currSum > target) return;

        if(currSum == target){
            ans.push_back(ds);
            return;
        }

        for(int i = index; i < arrSize; i++){
            if(i > index && arr[i] == arr[i-1]) continue; // skip duplicates
            if(currSum + arr[i] > target) break; // pruning

            ds.push_back(arr[i]);
            combination(i + 1, arrSize, currSum + arr[i], target, ds, ans, arr); // i+1 because each element can be used once
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end()); // sort to handle duplicates and pruning
        combination(0, candidates.size(), 0, target, ds, ans, candidates);
        return ans;
    }
};
