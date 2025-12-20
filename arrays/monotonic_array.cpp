class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool f=false;
        if(nums[0]<=nums[nums.size()-1]){
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]<=nums[i+1])
                f=true;
                else
                return false;
            }
        }
        else{
            for(int i=nums.size()-1;i>0;i--){
                if(nums[i]<=nums[i-1])
                f=true;
                else
                return false;
            }
        }
        return true;
        
    }
};