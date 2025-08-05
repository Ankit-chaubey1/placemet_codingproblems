class Solution {
public:
    string reverseVowels(string s) {
        string vowels="aeiouAEIOU";
        int left=0;
        int right=s.size()-1;
        while(left<right){
            while(left<right && vowels.find(s[left])==-1){
                left++;
            }
             while(left<right && vowels.find(s[right])==-1){
                right--;
            }
               swap(s[left],s[right]);
               left++;
               right--;
        }
     
        return s;
        
…};

/*
nput: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"
*/
