class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int out = 0;
        int l = 0;
        int r = n-1;

        while(l<r){
            int curr = min(height[l], height[r]) * (r-l);
            out = max(out, curr);
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return out;
    }
};