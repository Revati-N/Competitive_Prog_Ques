class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0;
        int neg = 1;
        vector<int> num(nums.size());
        for(int it : nums){
            if(it < 0){
                num[neg] = it;
                neg +=2;
            }
            else{
                num[pos] = it;
                pos += 2;
            }
        }
        return num;
    }
};