class Solution {
public:
    string reverseVowels(string s) {
    int f=0, b=s.size()-1;
    string n="AEIOUaeiou" ;
    while(f<b)
    {
     while(f<b && n.find(s[f])==string::npos) f++;
     while(f<b && n.find(s[b])==string::npos) b--;
    if(f<b){
        swap(s[f],s[b]);
        f++;
        b--;
    }
    }
    return s;
    }
};