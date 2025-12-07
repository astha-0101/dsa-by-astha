class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int freq=0;
        for(int i=0;i<n;i++){
            int a=nums[i];
            int b=0;
            
                while(a!=0){
                    a=a/10;
                   b++;
                }
                if(b%2==0){
                    freq++;
                }
            
        }
        return freq;
        
    }
};