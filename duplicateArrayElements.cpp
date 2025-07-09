unordered_map<int, int> freq;
for (int num : nums) {
    freq[num]++;
}

vector<int> ans;
for (auto i : freq) {
    if (i.second > 1) {
        ans.push_back(i.first);
    }
}
return ans;


/*
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
*/
