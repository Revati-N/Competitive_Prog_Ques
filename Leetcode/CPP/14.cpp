class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string outp = "";
        sort(strs.begin(), strs.end()); // Sorts into order of similar prefix
        string first = strs[0];
        string last = strs[n-1];
        for(int i = 0; i< min(first.size(), last.size()); i++){
            if(first[i] != last[i]){
                return outp;
            }
            outp+= first[i];
        }
        return outp;
    }
};