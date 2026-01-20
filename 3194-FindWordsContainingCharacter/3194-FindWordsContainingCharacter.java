// Last updated: 1/20/2026, 5:26:17 PM
class Solution {
    public List<Integer> findWordsContaining(String[] words, char x) {
        List<Integer> result  = new ArrayList<>();
        if(words.length > 50|| words.length <1) return result ;
        if(x <'a'||x>'z' ) return result ;
        for (int i = 0; i < words.length; i++) {
            String word = words[i];
        if(word.length() > 50 || word.length() <1) return result ;
        for(char c : word.toCharArray()){
            if(c == x){
            result.add(i);
            break;
            }
        }
        }
        return result;
    }
}