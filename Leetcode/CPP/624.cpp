class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int smol = arrays[0][0];
        int big = arrays[0].back();
        int max_distance = 0;

        for (int i = 1; i < arrays.size(); ++i) {
            max_distance = max(max_distance, abs(arrays[i].back() - smol));
            max_distance = max(max_distance, abs(big - arrays[i][0]));
            smol = min(smol, arrays[i][0]);
            big = max(big, arrays[i].back());
        }

        return max_distance;
    }
};