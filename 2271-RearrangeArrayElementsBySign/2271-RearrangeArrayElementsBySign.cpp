// Last updated: 1/20/2026, 5:26:22 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0,neg=1;
        int n=nums.size();
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                temp[pos]=nums[i];
                pos+=2;
            }
            else{
                temp[neg]=nums[i];
                neg+=2;
            }
        }
        return temp;
    }
};