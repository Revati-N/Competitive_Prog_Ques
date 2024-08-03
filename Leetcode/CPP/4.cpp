class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
            int m = nums2.size();
            vector<int> v;
        for(int i=0;i<n;i++){
                v.push_back(nums1[i]);
        }
            for(int j=0;j<m;j++){
                    v.push_back(nums2[j]);
            }
            int k = v.size();
            sort(v.begin(),v.end());
            double x = 0;
            double z=0;
                    if((k)%2 == 0){
                            x = v[k/2]+v[(k-2)/2];
                    }
            else if(k%2 != 0){
                  z = v[(k-1)/2];
                    return z;
            }
            double y = x/2.0;
            return y;
    }
};