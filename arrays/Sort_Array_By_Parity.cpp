class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> e;
        vector<int> o;
       
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
            e.push_back(nums[i]);
            else
            o.push_back(nums[i]);
        }
        vector<int> result = e;
        result.insert(result.end(), o.begin(), o.end());
        return result;
    }
};