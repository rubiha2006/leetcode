class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
      unordered_map<int, int> freq;
        int res = 0, mod = 1e9 + 7;
        for (int a : deliciousness) {
            for (int p = 1; p <= (1 << 21); p <<= 1)
                res = (res + freq[p - a]) % mod;
            freq[a]++;
        }
        return res;
    }
};