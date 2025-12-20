class Solution {
public:
    bool checkIfPangram(string s) {
        
        if(s.size()<26)
        return false;
        for(char i='a';i<='z';i++){
            bool f=false;
            for (int j = 0; j < s.length(); j++) {
            if(s[j]==i)
            f=true;
        }
        if(!f)
        return false;
        }
        return true;
    }
};