// Last updated: 1/20/2026, 5:28:40 PM
class Solution {
    public int removeElement(int[] nums, int val) {
        if(nums.length == 0) return 0;
        int k = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
}