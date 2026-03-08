// Last updated: 3/8/2026, 8:33:16 AM
1class Solution {
2    public int minimumIndex(int[] capacity, int itemSize) {
3        int mincap=Integer.MAX_VALUE;
4        int index=-1;
5        for(int i =0;i<capacity.length;i++){
6            if(capacity[i]>=itemSize && capacity[i] < mincap){
7                mincap = capacity[i];
8                index= i;
9            }
10        }
11        return index;
12    }
13}