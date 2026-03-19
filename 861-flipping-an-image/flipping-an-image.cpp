class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size();
        int n=image[0].size();
        for(int i=0;i<m;i++){
            int p=0;
            int q=n-1;
            while(p<q){
                swap(image[i][p],image[i][q]);
                p++;
                q--;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(image[i][j]==0) image[i][j]=1;
                else image[i][j]=0;
            }
        }
        return image;
    }
};