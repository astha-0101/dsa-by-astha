class Solution {
public:
    string removeStars(string s) {
      string ans="";
      stack <char> st;
      int n=s.size();
      for(int i=0;i<n;i++){
        if(s[i]=='*'){
            if(!st.empty()){
                st.pop();
            }
        }
        else
        st.push(s[i]);
      }
      for(int i=st.size()-1;i>=0;i--){
        ans+=st.top();
        st.pop();
      }
      reverse(ans.begin(), ans.end());
        return ans;
    }
};
