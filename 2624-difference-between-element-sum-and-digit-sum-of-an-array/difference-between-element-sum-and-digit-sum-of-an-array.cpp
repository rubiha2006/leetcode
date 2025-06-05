class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int esum=0;
        int dsum=0;
        for(auto s:nums)
        {
            esum+=s;
        }
        for(auto s:nums)
        while(s){
            int x=s%10;
            dsum+=x;
            s=s/10;
        }
        return esum-dsum;
    }
};