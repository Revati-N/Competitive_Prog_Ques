class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> unmap;
        vector<vector<string>> ans;
        for(int i =0; i<strs.size(); i++){
            string tempy = strs[i];
            sort(tempy.begin(), tempy.end());
            if(unmap.find(tempy) != unmap.end()){
                ans[unmap[tempy]].push_back(strs[i]);
            }
            else{
                unmap[tempy] = ans.size();
                ans.push_back({strs[i]});
            }
        }     
        return ans;
    }
};