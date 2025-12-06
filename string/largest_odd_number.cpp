class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int digit=0;
        for(int i=n-1;i>=0;i--){
            digit = num[i] - '0';
            if(digit%2!=0){
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};