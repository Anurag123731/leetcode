class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c) return mat;
        vector<vector<int>>ans(r,vector<int>(c));
        int row=0;
        int cols=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[row][cols]=mat[i][j];
                cols++;
                if(cols==ans[0].size()){
                    row++;
                    cols=0;
                }
            }
        }
        return ans;


    }
};