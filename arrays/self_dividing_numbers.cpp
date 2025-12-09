class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int a=i;
            int flag=0;
            while(a!=0){
                int b=a%10;
                if(b==0 || i%b!=0){
                    flag=-1;
                }
                a=a/10;
            }
            if(flag!=-1){
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};