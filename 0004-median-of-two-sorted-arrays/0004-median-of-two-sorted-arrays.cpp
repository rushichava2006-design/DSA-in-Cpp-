class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size() ,n= nums2.size() ;
        vector<int> nums3(m+n);
        int i = 0 , j = 0 , k = 0;
            while(i<m and j<n){
                if(nums1[i]<nums2[j])nums3[k++] = nums1[i++];
                else nums3[k++] = nums2[j++];
            }
            while(i<m) nums3[k++] = nums1[i++];
            while(j<n) nums3[k++] = nums2[j++];
         int o = nums3.size();
         if(o%2 == 1) return nums3[o/2];
         else {
            return (nums3[o/2-1]+(double)nums3[o/2]) /2.0;
         }
    }
};