class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        unordered_map<char,int>n;
        for(int i=0;i<t.size();i++){
            n[t[i]]++;
        }
        for(auto x : m){
            if(n.find(x.first)!=n.end()){
                if(m[x.first]!=n[x.first])
                return false;
            }
            else return false;
        }
        return true;
    }
};