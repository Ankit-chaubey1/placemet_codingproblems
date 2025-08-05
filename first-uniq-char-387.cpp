class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        for (auto i : s) {
            freq[i]++;
        }
        for (int i=0;i<s.length();i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }
         return -1;
    }
};

/*
Input: s = "leetcode"

Output: 0

Explanation:

The character 'l' at index 0 is the first character that does not occur at any other index.

Example 2:

Input: s = "loveleetcode"

Output: 2

Example 3:

Input: s = "aabb"

Output: -1
*/
