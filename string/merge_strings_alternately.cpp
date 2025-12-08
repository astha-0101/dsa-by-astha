class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        string ans="";
        int mx=max(n1,n2);
        for(int i=0;i<mx;i++){
            if(n1!=0){
                ans+=word1[i];
                n1--;
            }
            if(n2!=0){
                ans+=word2[i];
                n2--;
            }


        }
        return ans;
        
    }
};