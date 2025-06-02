class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
    int evenCount = 0;
    int oddCount = 0;
        for (int p : position) {
            if (p % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        return std::min(oddCount, evenCount);    
    }
};