// Last updated: 1/20/2026, 5:29:06 PM
class Solution {
public:
    int reverse(int x) {
        long rev=0;
        while(x!=0){
        int num=x%10;
        rev= rev*10 + num;
        x/=10;
        }
        if(rev> INT_MAX||rev<INT_MIN)return 0;
        return rev;
    }
};