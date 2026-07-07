class Solution {
public:
    stack<char>st;
    string removeStars(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]!='*') st.push(s[i]);
            else st.pop();
        }
        string ans;
        while(st.size()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};