class Solution {
public:
    void allsub(vector<int>& nums,
                vector<int>& ans,
                int i,
                vector<vector<int>>& allsubs) {   // reference

        if (i == nums.size()) {
            allsubs.push_back(ans);   //  no braces needed
            return;
        }

        // include
        ans.push_back(nums[i]);
        allsub(nums, ans, i + 1, allsubs);

        // exclude
        ans.pop_back();
        allsub(nums, ans, i + 1, allsubs);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubs;
        vector<int> ans;
        allsub(nums, ans, 0, allsubs);
        return allsubs;
    }
};