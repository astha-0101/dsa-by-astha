class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        
        for(int i=0;i<n;i++){
            string n1=s.substr(i)+s.substr(0, i);
            if(n1==goal){
                return true;
            }

        }
        return false;
        
    }
};