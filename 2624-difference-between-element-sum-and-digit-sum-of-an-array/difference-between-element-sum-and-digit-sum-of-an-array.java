class Solution {
    public int differenceOfSum(int[] nums) {
    int elementSum = 0;
        int digitSum = 0;
        for (int num : nums) {
            elementSum += num;
            String s = String.valueOf(num);
            for (char c : s.toCharArray()) {
                digitSum += c - '0';
            }
        }
        return Math.abs(elementSum - digitSum);     
    }
}