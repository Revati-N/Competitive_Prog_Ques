class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n%2 != 0){return false;}
        stack<char> st;
        unordered_map<char,char> mp = {{')','('},{']','['},{'}','{'}};
        for (char x:s){
            if(mp.find(x) == mp.end()){
                st.push(x);
            }
            else if(!st.empty() && mp[x] == st.top()){
                st.pop();
            }
            else{return false;}
        }
        return st.empty();
    }
};