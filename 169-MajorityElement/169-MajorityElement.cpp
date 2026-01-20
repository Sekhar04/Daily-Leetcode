// Last updated: 1/20/2026, 5:27:46 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  count = 0;
        int  candidate = 0;
        for(int num : nums) {
            if(count==0){
                candidate = num;
            }
            if(num == candidate){
                count ++;
            }else {
                count --;
            }
        }
        count = 0;
        for(int num : nums){
            if(num == candidate ){
                count ++;
            }
        }
        return (count > nums.size()/2 )? candidate : -1;
    }
};