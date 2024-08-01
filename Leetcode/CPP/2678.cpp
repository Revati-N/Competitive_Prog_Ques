class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count = 0;
        for(int i = 0; i<n; i++){
            string curr = details[i];
            int tens = curr[11];
            int ones = curr[12];
            if (tens > '6' || (tens == '6' && ones > '0')){
                count +=1;
            }
        }
        return count;
    }
};