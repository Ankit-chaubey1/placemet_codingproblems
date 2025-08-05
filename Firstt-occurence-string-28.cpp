class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        if(n<m){
            return -1;
        }
        for(int i=0;i<=n-m;i++){
            if(haystack.substr(i,m)==needle){
                return i;
            }
        }
        return -1;
    }
};

/*
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.

*/
