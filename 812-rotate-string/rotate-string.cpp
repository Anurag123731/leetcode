class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=0;i<s.size();i++){
            char last=s.back();
            s.pop_back();
            s=last+s;
            if(s==goal) return true;
        }
        return false;
    }
};