class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        /* sort(s.begin(),s.end());
         sort(t.begin(),t.end());
         return s==t;*/

…            }
        }
        unordered_map<char, int> freq;
        for (auto i : s) {
            freq[i]++;
        }
        for (auto i : t) {
            freq[i]--;
        }
        for (auto i : freq) {
            if (i.second != 0) {
                return false;
            }
        }
        return true;
    }
};

/*
Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false
*/
