class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());
        int  ans=0;
        sort(nums.begin(), nums.end());
        for(int i=min;i<=max;i++){
            int freq=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    freq++;
                    
                }

            }
            if(freq==1){
                ans=i;
             
            }
        }
        return ans;

        
    }
};