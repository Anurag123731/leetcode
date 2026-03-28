class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>v(arr.size());
        int i=0;
        int j=0;
        while(j<v.size()){
            if(arr[i]!=0){
                v[j]=arr[i];
                i++;
                j++;
            }
            else{
                v[j]=0;
                if(j+1<v.size())
                v[j+1]=0;
                i++;
                j+=2;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=v[i];
        }

    }
};