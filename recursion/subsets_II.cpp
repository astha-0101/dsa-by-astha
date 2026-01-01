class Solution {
public:
    void getAllSubs(vector<int>& nums, vector<int>& ans, int i,
                    vector<vector<int>>& allSubs) {
        if (i == nums.size()) {
            allSubs.push_back(ans);
            return;
        }

        // INCLUDE nums[i]
        ans.push_back(nums[i]);
        getAllSubs(nums, ans, i + 1, allSubs);
        ans.pop_back();

        // EXCLUDE nums[i] and skip duplicates
        int idx = i + 1;
        while (idx < nums.size() && nums[idx] == nums[i])
            idx++;

        getAllSubs(nums, ans, idx, allSubs);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> allSubs;
        vector<int> ans;

        getAllSubs(nums, ans, 0, allSubs);
        return allSubs;
    }
};