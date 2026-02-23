class Solution {
public:
    string removeOccurrences(string s, string part) {
        int l=part.length();
        while(s.find(part)<s.length()){
            int x=s.find(part);
            s.erase(x,l);
        }
        return s;
    }
};