class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return helper(0, 0, s, p, dp);
    }

    bool helper(int i, int j, string &s, string &p, vector<vector<int>> &dp) {
        if (dp[i][j] != -1) return dp[i][j];

        if (j == p.size()) return dp[i][j] = (i == s.size());

        bool firstMatch = (i < s.size() && (s[i] == p[j] || p[j] == '.'));

        if (j+1 < p.size() && p[j+1] == '*') {
            // Case 1: skip "x*" (zero occurrence)
            // Case 2: use "x*" if firstMatch
            return dp[i][j] = (helper(i, j+2, s, p, dp) || 
                               (firstMatch && helper(i+1, j, s, p, dp)));
        } else {
            return dp[i][j] = (firstMatch && helper(i+1, j+1, s, p, dp));
        }
    }
};
