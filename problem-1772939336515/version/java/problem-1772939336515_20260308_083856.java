// Last updated: 3/8/2026, 8:38:56 AM
1class Solution {
2    public int smallestBalancedIndex(int[] nums) {
3       int[] nav = nums; 
4
5        int n = nav.length;
6
7        long[] rightProduct = new long[n];
8        rightProduct[n-1] = 1;
9
10        for(int i = n-2; i >= 0; i--){
11            if(rightProduct[i+1] > 1e15) 
12                rightProduct[i] = (long)1e15;
13            else
14                rightProduct[i] = rightProduct[i+1] * nav[i+1];
15        }
16
17        long leftSum = 0;
18
19        for(int i = 0; i < n; i++){
20            if(leftSum == rightProduct[i])
21                return i;
22
23            leftSum += nav[i];
24        }
25
26        return -1;
27    }
28}