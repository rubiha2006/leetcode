class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
      unordered_map<string, long long> ratioCount;
        long long result = 0;

        for (auto& rect : rectangles) {
            int w = rect[0], h = rect[1];
            int gcd = __gcd(w, h);
            w /= gcd;
            h /= gcd;

            string key = to_string(w) + "/" + to_string(h);
            result += ratioCount[key];
            ratioCount[key]++;
        }
        return result;    
    }
};