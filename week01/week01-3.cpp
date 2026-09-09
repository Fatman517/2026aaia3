///week01-3.cpp學習計畫basic第三題
///28. Find the Index of the First Occurrence in a String
///284c94xl 5p
class Solution {
public:
    int strStr(string haystack, string needle) {
        //所有的城市題目<都可以用for(迴圈)if(判斷)寒士呼叫
        int N1 = haystack.length(),N2 = needle.length(); //寒士呼叫,字串的長度
        for (int i=0;i<=N1-N2;i++){
            if (haystack.substr(i,N2) == needle) return i; //找到答案\

        }

        return -1; // 找不同
    }
};
