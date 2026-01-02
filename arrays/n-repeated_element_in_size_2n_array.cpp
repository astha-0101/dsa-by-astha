class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int mx=*max_element(nums.begin(), nums.end());
        
        for(int i=0;i<=mx;i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    count++;
                }
                
            }
            if(count>1)
            return i;
        }
        return NULL;
    }
};