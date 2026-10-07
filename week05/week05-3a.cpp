//week05-3a.cpp ¾Ç²ß­pµe
//leetcode 58.length of last word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string now;
        while ( ss >> now ) {
        }
        return now.length();
    }
};
