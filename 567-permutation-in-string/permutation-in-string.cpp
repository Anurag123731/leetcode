class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int>freq(26,0);
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
        for(int i=0;i<=s2.length()-s1.length();i++){
            int j=i+s1.length()-1;
            vector<int>f2(26,0);
            for(int k=i;k<=j;k++){
                f2[s2[k]-'a']++;
            }
            if(freq==f2) return true;
        }
    return false;
    }
};