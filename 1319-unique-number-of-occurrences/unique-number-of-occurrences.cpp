class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        unordered_set<int>sk;
        unordered_set<int>sv;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto x:m){
            sk.insert(x.first);
            sv.insert(x.second);
        }
        return sk.size()==sv.size();
    }
};