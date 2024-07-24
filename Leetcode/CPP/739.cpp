class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        stack<pair<int, int>> st;
        vector<int> out(n);
        for(int i=n-1; i>=0; i--){
            while(!st.empty() && st.top().first <= temp[i]){
                st.pop();
            }
            
            if(st.empty()) out[i] = 0;
            else out[i] = st.top().second- i;
            st.push({temp[i], i});
        }

        return out;
    }
};