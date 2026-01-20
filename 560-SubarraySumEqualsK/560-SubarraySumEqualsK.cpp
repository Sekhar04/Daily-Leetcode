// Last updated: 1/20/2026, 5:27:13 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int> psum(n);
        unordered_map<int,int> pre;
        psum[0] = nums[0];
        for(int i = 1; i< n; i++) {
            psum[i] = psum[i-1]+nums[i];
        }
        pre[0]=1;
        for(int i = 0; i<n;i++){
            if(pre.find(psum[i]-k)!=pre.end()){
                count+=pre[psum[i]-k];
            }
            pre[psum[i]]++;
        }
        return count;
    }
};