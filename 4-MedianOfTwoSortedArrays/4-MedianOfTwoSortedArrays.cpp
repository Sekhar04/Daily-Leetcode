// Last updated: 1/20/2026, 5:29:04 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> arr;
        arr.reserve(m+n);
        arr.insert(arr.end(),nums1.begin(),nums1.end());
        arr.insert(arr.end(),nums2.begin(),nums2.end());
        sort(arr.begin(),arr.end());
        int s = arr.size();
        double res = 0;
        if(s % 2 == 0){
            res = (arr[(s/2)-1] + arr[s/2])/2.0;
        }else res = arr[s/2];

        return res;
    }
};