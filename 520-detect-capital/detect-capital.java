class Solution {
    public boolean detectCapitalUse(String word) {
    if(word.length()<=1) return true;
    if(word.equals(word.toUpperCase()))return true;
    if(word.equals(word.toLowerCase()))return true;
    return Character.isUpperCase(word.charAt(0))&&word.substring(1).equals(word.substring(1).toLowerCase());   
    }
}