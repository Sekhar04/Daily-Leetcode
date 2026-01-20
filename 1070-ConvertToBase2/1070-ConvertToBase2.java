// Last updated: 1/20/2026, 5:26:45 PM
class Solution {
    public String baseNeg2(int n) {
        StringBuilder result = new StringBuilder();
        if (n==0){
            return "0";
        }
        while(n != 0){
            int rem = n%(-2);
            n = n/-2;
        
        if( rem < 0){
            rem += 2;
            n+=1;
        }
        result.insert(0,rem);
    }
    return result.toString();
    }
}