class Solution {
public:
    string removeDuplicates(string s) {
        vector <char> st;
        for(int i=0;i<s.size();i++){
            st.push_back(s[i]);
        }
        int j=1;
        while(j!=0){
            j=0;
            for(int i=0;i<st.size()-1;i++){
                if(st[i]==st[i+1]){
                    st.erase(st.begin()+i);
                    st.erase(st.begin()+i);
                    j++;
                    i=-1;
                }
                
            }
        }
        string remove="";
        for(int i=0;i<st.size();i++){
            remove+=st[i];
        }
        return remove;

    }
};