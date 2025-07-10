class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> arr;  // {value, original_index}

        // Store value and original index
        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        // Sort based on value
        sort(arr.begin(), arr.end());

        int i = 0, j = n - 1;
        while (i < j) {
            int sum = arr[i].first + arr[j].first;
            if (sum == target) {
                return {arr[i].second, arr[j].second};  // return original indices
            } else if (sum < target) {
                i++;
            } else {
                j--;
            }
        }

        return {}; // no valid pair found
    }
};


/*
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
*/
