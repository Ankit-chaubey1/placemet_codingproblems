class Solution {
public:
    bool isSubsequence(string s, string t) {
       int i=0;
       int j=0;
       while(i<s.length()&& j<t.length()){
        if(s[i]==t[j]){
            i++;
        }
        j++;
       }
return i==s.length();
    }
};

/*
Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
 

*/
