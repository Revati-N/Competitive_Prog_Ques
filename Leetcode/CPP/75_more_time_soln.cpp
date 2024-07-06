class Solution {
public:
    void sortColors(vector<int>& nums) {
        int x = 0, y = 0, z = 0;
        int n = nums.size();
        for (int i = 0; i <n; i++){
            if(nums[i] == 0){x++;}
            else if(nums[i] == 1){y++;}
            else z++;
        }
        int j = 0;
        while(x--) {nums[j++] = 0;}
        while(y--) {nums[j++] = 1;}
        while(z--) {nums[j++] = 2;}
    }
};