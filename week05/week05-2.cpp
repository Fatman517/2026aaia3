//week05-2.cpp
class Solution {
public:
    string toLowerCase(string s) {
        //s[0] = 'h'; 不用寫這行 只是舉例
        for (int i=0; i<s.length();i++) {
            //以前if(s[i]>='A' &&s[i]<='Z')s[i] - 'A' + 'a'
            //以前if(isupper(s[i]))s[i] = s[i] - 'A' + 'a';
            s[i] = tolower(s[i]);//前面要記得#include <cctype>
        }
        return s;
    }
};
