class Solution {
public:
    vector<string> sortPeople(vector<string>& nam, vector<int>& hei) {
        int n = nam.size();
        unordered_map<int,string> umap;
        for(int i =0; i<n; i++){
            umap[hei[i]] = nam[i];
        }
        sort(hei.rbegin(),hei.rend());
        for(int i = 0; i<n; ++i){
            nam[i] = umap[hei[i]];
        }
        return nam;
    }
};