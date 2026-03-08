// Last updated: 3/8/2026, 8:59:25 AM
1class Solution {
2    private boolean canSortInOne(char[] arr, char[] sortedArr, int n) {
3    if (Arrays.equals(arr, sortedArr)) return true;
4    int l = 0;
5    while (l < n && arr[l] == sortedArr[l]) l++;
6    int r = n - 1;
7    while (r >= 0 && arr[r] == sortedArr[r]) r--;
8    if (l > 0 || r < n - 1) {
9        char[] window = Arrays.copyOfRange(arr, l, r + 1);
10        Arrays.sort(window);
11        char[] candidate = new char[n];
12        System.arraycopy(arr, 0, candidate, 0, l);
13        System.arraycopy(window, 0, candidate, l, window.length);
14        System.arraycopy(arr, r + 1, candidate, r + 1, n - r - 1);
15        return Arrays.equals(candidate, sortedArr);
16    }
17    return false;
18}
19    public int minOperations(String s) {
20        String input = s;
21
22    int n = s.length();
23    char[] arr = s.toCharArray();
24    char[] sortedArr = s.toCharArray();
25    Arrays.sort(sortedArr);
26
27    if (Arrays.equals(arr, sortedArr)) return 0;
28
29    if (n == 2) return -1;
30
31    int left = 0;
32    while (left < n && arr[left] == sortedArr[left]) left++;
33
34    int right = n - 1;
35    while (right >= 0 && arr[right] == sortedArr[right]) right--;
36    if (left > 0 || right < n - 1) {
37        char[] window = Arrays.copyOfRange(arr, left, right + 1);
38        Arrays.sort(window);
39
40        char[] candidate = new char[n];
41        System.arraycopy(arr, 0, candidate, 0, left);
42        System.arraycopy(window, 0, candidate, left, window.length);
43        System.arraycopy(arr, right + 1, candidate, right + 1, n - right - 1);
44
45        if (Arrays.equals(candidate, sortedArr)) return 1;
46    }
47
48    char[] tryFirst = arr.clone();
49    Arrays.sort(tryFirst, 0, n - 1);
50    if (canSortInOne(tryFirst, sortedArr, n)) return 2;
51
52    char[] tryLast = arr.clone();
53    Arrays.sort(tryLast, 1, n);
54    if (canSortInOne(tryLast, sortedArr, n)) return 2;
55
56    return 3;
57    }
58}