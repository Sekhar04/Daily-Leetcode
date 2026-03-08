// Last updated: 3/8/2026, 9:01:48 AM
1class Solution {
2    private int encCost, flatCost;
3    private Map<Long, Long> memo;
4    private int[] prefix;
5    private String s;
6
7    public long minCost(String s, int encCost, int flatCost) {
8        String input = s;
9        this.s = input;
10        this.encCost = encCost;
11        this.flatCost = flatCost;
12        this.memo = new HashMap<>();
13        int n = input.length();
14        prefix = new int[n + 1];
15        for (int i = 0; i < n; i++) {
16            prefix[i + 1] = prefix[i] + (input.charAt(i) == '1' ? 1 : 0);
17        }
18        return solve(0, n);
19    }
20
21    private long solve(int start, int len) {
22        long key = (long) start * 100001 + len;
23        if (memo.containsKey(key)) return memo.get(key);
24        int x = prefix[start + len] - prefix[start];
25        long cost = (x == 0) ? flatCost : (long) len * x * encCost;
26        if (len % 2 == 0) {
27            int half = len / 2;
28            cost = Math.min(cost, solve(start, half) + solve(start + half, half));
29        }
30        memo.put(key, cost);
31        return cost;
32    }
33}