// Last updated: 1/20/2026, 5:28:39 PM
class Solution {
    public int strStr(String haystack, String needle) {
        for(int i=0,j=needle.length();j<=haystack.length();i++,j++){
            if(haystack.substring(i,j).equals(needle)){
                return i;
            }
        }
        return -1;
    }
}