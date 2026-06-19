class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> sw;
        int i = 0;
        while(i < s.size()) {
            if(s[i] != '#') {
                sw.push(s[i]);
            }
            else {
                if(!sw.empty()) sw.pop();
            }
            i++;
        }
        stack<char> tw;
        i = 0;
        while(i < t.size()) {
            if(t[i] != '#') {
                tw.push(t[i]);
            }
            else {
                if(!tw.empty()) tw.pop();
            }
            i++;
        }
        if(sw.size() != tw.size()) return false;

        while(!sw.empty()) {
            if(sw.top() != tw.top()) return false;
            sw.pop();
            tw.pop();
        }
        return true;
    }
};