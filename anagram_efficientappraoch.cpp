class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> map;
        for (int i = 0; i < s.size(); i++){
            if (!map.count(s[i])){
                map[s[i]] = 1;
            } else {
                map[s[i]]++;
            }
        }

        for (int i = 0; i < t.size(); i++){
            if (map.contains(t[i])){
                map[t[i]]--;
                if (map[t[i]] <= 0){
                    map.erase(t[i]);
                }
            }
        }
        return map.empty();
    }
};
