class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreaterMap;
        stack<int> st;
        
        // Build next greater element map for nums2
        for(int num : nums2) {
            while(!st.empty() && st.top() < num) {
                nextGreaterMap[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        
        // Build result using the map
        vector<int> result;
        for(int num : nums1) {
            result.push_back(nextGreaterMap.count(num) ? nextGreaterMap[num] : -1);
        }
        
        return result;
    }
};